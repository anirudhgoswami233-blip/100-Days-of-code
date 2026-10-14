
#include <stdio.h>

int main()
{
    char name[1000];
    int i = 0;

    fgets(name, sizeof(name), stdin);

    if (name[0] != ' ' && name[0] != '\n' && name[0] != '\0')
        printf("%c.", name[0]);

    while (name[i] != '\0')
    {
        if (name[i] == ' ' && name[i + 1] != ' ' &&
            name[i + 1] != '\n' && name[i + 1] != '\0')
        {
            printf("%c.", name[i + 1]);
        }

        i++;
    }

    return 0;
}
