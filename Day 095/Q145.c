/*
Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
*/

#include <stdio.h>

#define MAX 100

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

/* Finds the student with the highest marks and returns that structure */
struct Student findTopper(struct Student s[], int n)
{
    int i, top = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks)
            top = i;
    }

    return s[top];          /* a copy of the whole structure is returned */
}

int main(void)
{
    struct Student s[MAX];
    struct Student topper;
    int n, i;

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

    topper = findTopper(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll_no, topper.marks);

    return 0;
}
