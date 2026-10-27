/*
Q124: Take two filenames from the user – a source file and a destination file.
Copy all the content from the source file to the destination file using
fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
*/

#include <stdio.h>
#include <string.h>

int main() {
    char sourceName[100], destName[100];
    FILE *source, *dest;
    char ch;

    printf("Enter the source filename: ");
    fgets(sourceName, sizeof(sourceName), stdin);
    sourceName[strcspn(sourceName, "\n")] = '\0';

    printf("Enter the destination filename: ");
    fgets(destName, sizeof(destName), stdin);
    destName[strcspn(destName, "\n")] = '\0';

    /* open the source for reading */
    source = fopen(sourceName, "r");
    if (source == NULL) {
        printf("Error: could not open the source file.\n");
        return 1;
    }

    /* open the destination for writing */
    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Error: could not create the destination file.\n");
        fclose(source);        /* close what we already opened */
        return 1;
    }

    /* copy one character at a time until EOF */
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);

    printf("File copied successfully to %s\n", destName);

    return 0;
}
