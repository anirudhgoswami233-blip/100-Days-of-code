/*
Q126: Ask the user for a filename. Check if it exists by trying to open it in
read mode. If the file pointer is NULL, print an error message; otherwise,
read and display its content.

Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!
*/

#include <stdio.h>

int main(void)
{
    char filename[100];
    FILE *fp;
    int ch;

    printf("Enter the file name: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    printf("----- File Content -----\n");

    /* Read and print one character at a time until end of file */
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    printf("\n------------------------\n");
    fclose(fp);
    return 0;
}
