/*
Q130: Store multiple student records (name, roll number, marks) into a file
using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 -> Name: Asha, Roll: 101, Marks: 85; Student 2 -> Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
*/

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char name[50];
    int roll, marks;
    int n, i;

    /* ---------- Part 1: write records using fprintf() ---------- */
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not create students.txt\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nStudent %d\n", i);
        printf("Name: ");
        scanf("%49s", name);
        printf("Roll: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    /* ---------- Part 2: read records back using fscanf() ---------- */
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open students.txt\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");
    while (fscanf(fp, "%49s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
