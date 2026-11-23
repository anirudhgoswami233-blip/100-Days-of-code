/*
Q125: Open an existing file in append mode and allow the user to enter a new
line of text. Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char filename[100];
    char text[500];
    FILE *fp;

    printf("Enter the file name: ");
    scanf("%99s", filename);
    getchar();                      /* consume the leftover newline */

    /* Check that the file already exists before appending */
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File '%s' does not exist.\n", filename);
        return 1;
    }
    fclose(fp);

    /* "a" mode: writes always go to the end, existing content is kept */
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open '%s' for appending.\n", filename);
        return 1;
    }

    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';   /* remove trailing newline */

    fprintf(fp, "\n%s", text);          /* put the new text on a new line */
    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
