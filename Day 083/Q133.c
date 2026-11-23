/*
Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days
*/

#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main(void)
{
    /* Names in the same order as the enum, so monthNames[m] matches month m */
    const char *monthNames[] = { "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
                                 "JUL", "AUG", "SEP", "OCT", "NOV", "DEC" };
    char input[10];
    int i, found = 0;
    enum Month m = JAN;

    printf("Enter month (JAN-DEC): ");
    scanf("%9s", input);

    /* Find which enum value the typed name matches */
    for (i = JAN; i <= DEC; i++) {
        if (strcmp(input, monthNames[i]) == 0) {
            m = (enum Month)i;
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Invalid month!\n");
        return 1;
    }

    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        default:            /* JAN, MAR, MAY, JUL, AUG, OCT, DEC */
            printf("31 days\n");
            break;
    }

    return 0;
}
