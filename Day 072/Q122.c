/*
Q122: Write a C program that opens an existing file (e.g., info.txt) and
reads its contents using fgets(). The program should print all the lines
to the console until EOF (end of file) is reached.

Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23
*/

#include <stdio.h>

int main() {
    char line[200];
    FILE *fp;

    /* "r" opens an existing file for reading */
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: could not open the file.\n");
        return 1;
    }

    /* fgets returns NULL once there is nothing left to read */
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
