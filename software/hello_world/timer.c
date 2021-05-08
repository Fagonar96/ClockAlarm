// #include "sys/alt_stdio.h"
#include "sys/alt_irq.h"
#include "system.h"
#include "alarm.c"
#include "update_displays.c"


#define SECONDS_IN_DAY 86399


// Timer control
volatile unsigned char *TIMER         = (unsigned char *)(TIMER_BASE);
volatile unsigned char *TIMER_CONTROL = (unsigned char *)(TIMER_BASE + 0x4);

// Time counter, specifies the current time in seconds
volatile unsigned int time_counter = 0;


/**
 * Function that is executed when the timer
 * generates an interruption
 */
void timer_interrupt(void* isr_context) {
	// Resets the interruption
	*TIMER = 0x0;

	// Time counter increases
	time_counter++;

	// Checks if a day has passed
	if (SECONDS_IN_DAY < time_counter) {
		time_counter = 0;
	}

	check_alarm(time_counter);
	// alt_printf("Timer: %x\n", time_counter);
}


/**
 * Setup function for the interval timer, it registers the
 * interruption and activates the timer
 */
void timer_setup() {
  // Register the timer interrupt function
  alt_ic_isr_register(
		  TIMER_IRQ_INTERRUPT_CONTROLLER_ID,
		  TIMER_IRQ,
		  timer_interrupt,
		  0,
		  0x0
  );

  // Init timer & enable interrupt
  *TIMER_CONTROL = 0x07;
}
