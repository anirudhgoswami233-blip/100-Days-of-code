/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and
perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/

#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main(void)
{
    char choice[20];
    int a, b;
    enum Operation op;

    printf("Enter operation (ADD/SUBTRACT/MULTIPLY) and two numbers: ");
    scanf("%19s %d %d", choice, &a, &b);

    /* Convert the text the user typed into the matching enum value */
    if (strcmp(choice, "ADD") == 0)
        op = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0)
        op = SUBTRACT;
    else if (strcmp(choice, "MULTIPLY") == 0)
        op = MULTIPLY;
    else {
        printf("Invalid operation!\n");
        return 1;
    }

    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
