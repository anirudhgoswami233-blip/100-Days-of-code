
#include <stdio.h>
#include <string.h>

int main()
{
    char name[1000];
    int i = 0, lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    int len = strlen(name);

    if (len > 0 && name[len - 1] == '\n')
        name[--len] = '\0';

    for (i = 0; i < len; i++)
    {
        if (name[i] == ' ')
            lastSpace = i;
    }

    for (i = 0; i < lastSpace; i++)
    {
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' '))
            printf("%c.", name[i]);
    }

    if (lastSpace != -1)
    {
        while (lastSpace + 1 < len && name[lastSpace + 1] == ' ')
            lastSpace++;

        printf(" ");
        for (i = lastSpace + 1; i < len; i++)
            printf("%c", name[i]);
    }
    else
    {
        printf("%s", name);
    }

    return 0;
}
