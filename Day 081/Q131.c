/*
Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day
with its integer value.

Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6
*/

#include <stdio.h>

/* Enum constants start at 0 and go up by 1 automatically */
enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main(void)
{
    /* Names in the same order as the enum, so dayNames[d] matches day d */
    const char *dayNames[] = { "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
                               "THURSDAY", "FRIDAY", "SATURDAY" };
    enum Day d;

    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", dayNames[d], d);
    }

    return 0;
}
