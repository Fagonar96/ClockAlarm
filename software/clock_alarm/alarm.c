// #include "sys/alt_stdio.h"
#include "system.h"


#define ALARM_DURATION 31  // Alarm time duration in seconds


// Leds data pointer
volatile unsigned char *LED_DATA = (unsigned char *) LEDS_BASE;

// Alarm, specifies the alarm time in seconds
volatile unsigned int alarm_time = 81000;

// Determines if leds should be on or off
volatile int pulse_value = 0;


/**
 * Verifies if the current time is between the alarm time and
 * alarm time + ALARM_DURATION, if it is true, then it writes
 * to the LEDS to turn it on and off
 */
void check_alarm(int current_time) {
	// Checks if the current time is between the
	// alarm time and alarm time plus ALARM_DURATION seconds
	if (alarm_time <= current_time && current_time <= alarm_time + ALARM_DURATION) {
		*LED_DATA = pulse_value;

		if (pulse_value == 1023) pulse_value = 0;
		else pulse_value = 1023;

		// alt_putstr("Alarm!\n");
	}
}
