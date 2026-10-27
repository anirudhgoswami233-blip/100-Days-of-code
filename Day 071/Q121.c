/*
Q121: Write a C program that creates a text file named info.txt in write mode.
The program should take the user's name and age as input, and write them to
the file using fprintf(). After writing, display a message confirming that
the data was successfully saved.

Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt
*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int age;

    FILE *fp;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    /* "w" creates the file, or wipes it if it already exists */
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error: could not create the file.\n");
        return 1;
    }

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
