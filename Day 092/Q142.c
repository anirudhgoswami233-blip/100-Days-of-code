/*
Q142: Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details
*/

#include <stdio.h>

#define N 5

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void)
{
    struct Student s[N];        /* array of 5 Student structures */
    int i;

    for (i = 0; i < N; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%49s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\n%-15s %-8s %-6s\n", "Name", "Roll", "Marks");
    printf("------------------------------\n");
    for (i = 0; i < N; i++) {
        printf("%-15s %-8d %-6d\n", s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
