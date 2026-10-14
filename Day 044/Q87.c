
#include <stdio.h>

int main()
{
    char str[1000];
    int spaces = 0, digits = 0, special = 0;

    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if (!((str[i] >= 'a' && str[i] <= 'z') ||
                   (str[i] >= 'A' && str[i] <= 'Z')))
        {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d",
           spaces, digits, special);

    return 0;
}
