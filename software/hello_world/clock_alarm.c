/* 
 * "Small Hello World" example. 
 * 
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example 
 * designs. It requires a STDOUT  device in your system's hardware. 
 *
 * The purpose of this example is to demonstrate the smallest possible Hello 
 * World application, using the Nios II HAL library.  The memory footprint
 * of this hosted application is ~332 bytes by default using the standard 
 * reference design.  For a more fully featured Hello World application
 * example, see the example titled "Hello World".
 *
 * The memory footprint of this example has been reduced by making the
 * following changes to the normal "Hello World" example.
 * Check in the Nios II Software Developers Manual for a more complete 
 * description.
 * 
 * In the SW Application project (small_hello_world):
 *
 *  - In the C/C++ Build page
 * 
 *    - Set the Optimization Level to -Os
 * 
 * In System Library project (small_hello_world_syslib):
 *  - In the C/C++ Build page
 * 
 *    - Set the Optimization Level to -Os
 * 
 *    - Define the preprocessor option ALT_NO_INSTRUCTION_EMULATION 
 *      This removes software exception handling, which means that you cannot 
 *      run code compiled for Nios II cpu with a hardware multiplier on a core 
 *      without a the multiply unit. Check the Nios II Software Developers 
 *      Manual for more details.
 *
 *  - In the System Library page:
 *    - Set Periodic system timer and Timestamp timer to none
 *      This prevents the automatic inclusion of the timer driver.
 *
 *    - Set Max file descriptors to 4
 *      This reduces the size of the file handle pool.
 *
 *    - Check Main function does not exit
 *    - Uncheck Clean exit (flush buffers)
 *      This removes the unneeded call to exit when main returns, since it
 *      won't.
 *
 *    - Check Don't use C++
 *      This builds without the C++ support code.
 *
 *    - Check Small C library
 *      This uses a reduced functionality C library, which lacks  
 *      support for buffering, file IO, floating point and getch(), etc. 
 *      Check the Nios II Software Developers Manual for a complete list.
 *
 *    - Check Reduced device drivers
 *      This uses reduced functionality drivers if they're available. For the
 *      standard design this means you get polled UART and JTAG UART drivers,
 *      no support for the LCD driver and you lose the ability to program 
 *      CFI compliant flash devices.
 *
 *    - Check Access device drivers directly
 *      This bypasses the device file system to access device drivers directly.
 *      This eliminates the space required for the device file system services.
 *      It also provides a HAL version of libc services that access the drivers
 *      directly, further reducing space. Only a limited number of libc
 *      functions are available in this configuration.
 *
 *    - Use ALT versions of stdio routines:
 *
 *           Function                  Description
 *        ===============  =====================================
 *        alt_printf       Only supports %s, %x, and %c ( < 1 Kbyte)
 *        alt_putstr       Smaller overhead than puts with direct drivers
 *                         Note this function doesn't add a newline.
 *        alt_putchar      Smaller overhead than putchar with direct drivers
 *        alt_getchar      Smaller overhead than getchar with direct drivers
 *
 */

#include "sys/alt_stdio.h"
#include "sys/alt_irq.h"
#include "system.h"
#include "timer.c"

// Define clock modes
#define TIME_MODE	0x1
#define ALARM_MODE	0x2
#define RUN_MODE 	0x3

// Set mode button addresses
volatile unsigned char *SET_MODE_BUTTON = (unsigned char *) (SET_MODE_BUTTON_BASE);
volatile unsigned char *SET_MODE_BUTTON_MASK = (unsigned char*) (SET_MODE_BUTTON_BASE + 8);
volatile unsigned char *SET_MODE_BUTTON_EDGE = (unsigned char*) (SET_MODE_BUTTON_BASE + 12);

// Increase hour button addresses
volatile unsigned char *INC_HOUR_BUTTON = (unsigned char *) (INC_HOUR_BUTTON_BASE);
volatile unsigned char *INC_HOUR_BUTTON_MASK = (unsigned char *) (INC_HOUR_BUTTON_BASE + 8);
volatile unsigned char *INC_HOUR_BUTTON_EDGE = (unsigned char *) (INC_HOUR_BUTTON_BASE + 12);

// Increase minute button addresses
volatile unsigned char *INC_MIN_BUTTON = (unsigned char *) (INC_MIN_BUTTON_BASE);
volatile unsigned char *INC_MIN_BUTTON_MASK = (unsigned char *) (INC_MIN_BUTTON_BASE + 8);
volatile unsigned char *INC_MIN_BUTTON_EDGE = (unsigned char *) (INC_MIN_BUTTON_BASE + 12);

// Confirm button addresses
volatile unsigned char *CONFIRM_BUTTON = (unsigned char *) (CONFIRM_BUTTON_BASE);
volatile unsigned char *CONFIRM_BUTTON_MASK = (unsigned char *) (CONFIRM_BUTTON_BASE + 8);
volatile unsigned char *CONFIRM_BUTTON_EDGE = (unsigned char *) (CONFIRM_BUTTON_BASE + 12);

volatile unsigned int mode = RUN_MODE;

volatile unsigned int hours = 0;
volatile unsigned int minutes = 0;

void handle_set_mode_button_interrupt(void *context)
{
	alt_putstr("Set mode button interrupt ...\n");

	switch (mode)
	{
		case TIME_MODE:
			alt_putstr("Set alarm mode: ON ...\n");
			mode = ALARM_MODE;
			break;
		case ALARM_MODE:
			alt_putstr("Set run mode: ON ...\n");
			mode = RUN_MODE;
			break;
		default:
			alt_putstr("Set time mode: ON ...\n");
			mode = TIME_MODE;
			break;
	}

	*(SET_MODE_BUTTON_EDGE) = 0x00; // Resets the interrupt.
}

void handle_increase_hour_interrupt(void *context)
{
	alt_putstr("Increase hour button interrupt ...\n");

	hours += 3600;

	if (hours > 86399)
	{
		hours = 0;
	}

	*(INC_HOUR_BUTTON_EDGE) = 0x00; // Resets the interrupt.
}

void handle_increase_min_interrupt(void *context)
{
	alt_putstr("Increase minute button interrupt ...\n");

	minutes += 60;

	if (minutes > 3599)
	{
		minutes = 0;
	}

	*(INC_MIN_BUTTON_EDGE) = 0x00; // Resets the interrupt.
}

void handle_confirm_button_interrupt(void *context)
{
	alt_putstr("Confirm button interrupt ...\n");

	if (mode == TIME_MODE)
	{
		time_counter = hours + minutes;
	}
	if (mode == ALARM_MODE)
	{
		alarm_time = hours + minutes;
	}

	*(CONFIRM_BUTTON_EDGE) = 0x00; // Resets the interrupt.

	mode = RUN_MODE;
}

void system_setup()
{
	alt_putstr("Initializing system ...\n");

	*(SET_MODE_BUTTON_MASK) = 0x07; // Write enable to IRQ mask.
	*(SET_MODE_BUTTON_EDGE) = 0x00; // Resets the interrupt.

	*(INC_HOUR_BUTTON_MASK) = 0x07; // Write enable to IRQ mask.
	*(INC_HOUR_BUTTON_EDGE) = 0x00; // Resets the interrupt.

	*(INC_MIN_BUTTON_MASK) = 0x07; // Write enable to IRQ mask.
	*(INC_MIN_BUTTON_EDGE) = 0x00; // Resets the interrupt.

	*(CONFIRM_BUTTON_MASK) = 0x07; // Write enable to IRQ mask.
	*(CONFIRM_BUTTON_EDGE) = 0x00; // Resets the interrupt.

	// Registers the set mode button input interrupt.
	alt_ic_isr_register(SET_MODE_BUTTON_IRQ_INTERRUPT_CONTROLLER_ID,
						SET_MODE_BUTTON_IRQ,
						handle_set_mode_button_interrupt, 0, 0x0);

	// Registers the increase hour button input interrupt.
	alt_ic_isr_register(INC_HOUR_BUTTON_IRQ_INTERRUPT_CONTROLLER_ID,
						INC_HOUR_BUTTON_IRQ,
						handle_increase_hour_interrupt, 0, 0x0);

	// Registers the increase minute button input interrupt.
	alt_ic_isr_register(INC_MIN_BUTTON_IRQ_INTERRUPT_CONTROLLER_ID,
						INC_MIN_BUTTON_IRQ,
						handle_increase_min_interrupt, 0, 0x0);

	// Registers the increase minute button input interrupt.
	alt_ic_isr_register(CONFIRM_BUTTON_IRQ_INTERRUPT_CONTROLLER_ID,
						CONFIRM_BUTTON_IRQ,
						handle_confirm_button_interrupt, 0, 0x0);

	alt_putstr("Interrupt registered ...\n");

}

int main()
{ 
  alt_putstr("Hello from Nios II!\n");

  system_setup();
  timer_setup();

  // Event loop never exits.
  while (1)
  {
	  if (mode == TIME_MODE)
		  update_displays(hours + minutes);
	  if (mode == ALARM_MODE)
	  	  update_displays(hours + minutes);
	  if (mode == RUN_MODE)
		  update_displays(time_counter);
  }

  return 0;
}
