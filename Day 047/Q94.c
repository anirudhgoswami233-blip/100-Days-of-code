
#include <stdio.h>

int main()
{
    char str[1000];
    char longest[1000];
    int i = 0, j = 0, maxLength = 0;

    fgets(str, sizeof(str), stdin);

    while (1)
    {
        int length = 0;
        j = 0;

        while (str[i] == ' ')
            i++;

        if (str[i] == '\0' || str[i] == '\n')
            break;

        while (str[i] != ' ' &&
               str[i] != '\0' &&
               str[i] != '\n')
        {
            length++;
            i++;
        }

        if (length > maxLength)
        {
            maxLength = length;

            int start = i - length;

            for (int k = 0; k < length; k++)
            {
                longest[j++] = str[start + k];
            }

            longest[j] = '\0';
        }
    }

    printf("%s", longest);

    return 0;
}
