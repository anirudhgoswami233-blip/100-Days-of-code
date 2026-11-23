/*
Q129: A file numbers.txt contains a list of integers separated by spaces.
Read all integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00
*/

#include <stdio.h>

int main(void)
{
    FILE *fp;
    int num, count = 0;
    long sum = 0;
    float average;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    /* fscanf returns 1 each time it successfully reads an integer */
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("Error: No integers found in numbers.txt\n");
        return 1;
    }

    average = (float)sum / count;

    printf("Sum = %ld\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}
