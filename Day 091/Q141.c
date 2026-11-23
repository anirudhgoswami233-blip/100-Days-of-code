/*
Q141: Define a structure Student with name, roll_no, and marks, then read and
print one student's data.

Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void)
{
    struct Student s;

    printf("Name: ");
    scanf("%49s", s.name);          /* no & needed: name is an array */
    printf("Roll: ");
    scanf("%d", &s.roll_no);
    printf("Marks: ");
    scanf("%d", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}
