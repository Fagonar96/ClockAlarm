#include "system.h"


volatile unsigned char *HOUR_1_DATA   = (unsigned char *) HOUR_1_BASE;
volatile unsigned char *HOUR_2_DATA   = (unsigned char *) HOUR_2_BASE;
volatile unsigned char *MINUTE_1_DATA = (unsigned char *) MIN_1_BASE;
volatile unsigned char *MINUTE_2_DATA = (unsigned char *) MIN_2_BASE;
volatile unsigned char *SECOND_1_DATA = (unsigned char *) SEC_1_BASE;
volatile unsigned char *SECOND_2_DATA = (unsigned char *) SEC_2_BASE;


/**
 * Converts an int into the 7 display equivalent
**/
int int_to_7display(int number) {
    switch (number) {
        case 0:  // 0000001
            return 1;
        case 1:  // 1001111
            return 79;
        case 2:  // 0010010
            return 18;
        case 3:  // 0000110
            return 6;
        case 4:  // 1001100
            return 76;
        case 5:  // 0100100
            return 36;
        case 6:  // 0100000
            return 32;
        case 7:  // 0001111
            return 15;
        case 8:  // 0000000
            return 0;
        default:  // 0000100
            return 4;
    }
}

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

    *HOUR_1_DATA = int_to_7display(hours / 10);  // First hours digit
    *HOUR_2_DATA = int_to_7display(hours % 10);  // Second hours digit

    *MINUTE_1_DATA = int_to_7display(minutes / 10);  // First minutes digit
    *MINUTE_2_DATA = int_to_7display(minutes % 10);  // Second minutes digit

    *SECOND_1_DATA = int_to_7display(seconds / 10);  // First seconds digit
    *SECOND_2_DATA = int_to_7display(seconds % 10);  // First seconds digit
}
