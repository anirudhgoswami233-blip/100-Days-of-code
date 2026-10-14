
#include <stdio.h>

int main()
{
    char str[1000];

    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }
    }

    printf("%s", str);

    return 0;
}
