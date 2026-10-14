
#include <stdio.h>

int main()
{
    char str[1000];
    int length = 0;
    char temp;

    scanf("%[^\n]", str);

    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("%s", str);

    return 0;
}
