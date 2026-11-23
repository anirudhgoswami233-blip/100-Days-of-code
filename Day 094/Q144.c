/*
Q144: Write a function that accepts a structure as parameter and prints its
members.

Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

/* The whole structure is passed by value (a copy is made) */
void printStudent(struct Student s)
{
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main(void)
{
    struct Student st;

    printf("Enter name, roll and marks: ");
    scanf("%49s %d %d", st.name, &st.roll_no, &st.marks);

    printStudent(st);

    return 0;
}
