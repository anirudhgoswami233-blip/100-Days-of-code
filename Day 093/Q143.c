/*
Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
*/

#include <stdio.h>

#define MAX 100

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void)
{
    struct Student s[MAX];
    int n, i, top = 0;          /* top = index of the highest scorer */

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Invalid number of students!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter name, roll and marks of student %d: ", i + 1);
        scanf("%49s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    /* Start with the first student, replace whenever someone scores more */
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks)
            top = i;
    }

    printf("Topper: %s (Marks: %d)\n", s[top].name, s[top].marks);

    return 0;
}
