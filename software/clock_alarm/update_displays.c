#include "system.h"


volatile unsigned char *HOUR_1_DATA   = (unsigned char *) HOUR_1_BASE;
volatile unsigned char *HOUR_2_DATA   = (unsigned char *) HOUR_2_BASE;
volatile unsigned char *MINUTE_1_DATA = (unsigned char *) MIN_1_BASE;
volatile unsigned char *MINUTE_2_DATA = (unsigned char *) MIN_2_BASE;
volatile unsigned char *SECOND_1_DATA = (unsigned char *) SEC_1_BASE;
volatile unsigned char *SECOND_2_DATA = (unsigned char *) SEC_2_BASE;


/**
 * This function updates display's data based on the current time
**/
void update_displays(int current_time) {
    // Get the hours based on the current time
    int hours = current_time / 3600;

    // Get the seconds left based on the remainder of the hours calculation,
    // and with that the minutes are calculated
    int seconds_left = current_time % 3600;
    int minutes = seconds_left / 60;

    // Get the seconds based on the remainder of the minutes calculation
    int seconds = seconds_left % 60;

    *HOUR_1_DATA = hours / 10;  // First hours digit
    *HOUR_2_DATA = hours % 10;  // Second hours digit

    *MINUTE_1_DATA = minutes / 10;  // First minutes digit
    *MINUTE_2_DATA = minutes % 10;  // Second minutes digit

    *SECOND_1_DATA = seconds / 10;  // First seconds digit
    *SECOND_2_DATA = seconds % 10;  // First seconds digit
}
