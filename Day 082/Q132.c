/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print
'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go
*/

#include <stdio.h>
#include <string.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main(void)
{
    char input[20];
    enum TrafficLight light;

    printf("Enter traffic light (RED/YELLOW/GREEN): ");
    scanf("%19s", input);

    /* Convert the text the user typed into the matching enum value */
    if (strcmp(input, "RED") == 0)
        light = RED;
    else if (strcmp(input, "YELLOW") == 0)
        light = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        light = GREEN;
    else {
        printf("Invalid input!\n");
        return 1;
    }

    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}
