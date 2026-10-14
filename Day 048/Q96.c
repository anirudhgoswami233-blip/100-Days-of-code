
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int start = 0, end = 0;

    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    while (str[end] != '\0')
    {
        if (str[end] == ' ' || str[end] == '\0')
        {
            for (int i = end - 1; i >= start; i--)
                printf("%c", str[i]);

            if (str[end] == ' ')
                printf(" ");

            start = end + 1;
        }

        end++;
    }

    for (int i = end - 1; i >= start; i--)
        printf("%c", str[i]);

    return 0;
}
