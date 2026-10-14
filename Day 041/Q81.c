
#include <stdio.h>

int main()
{
    char str[1000];
    int count = 0;

    scanf("%[^\n]", str);

    while (str[count] != '\0')
    {
        count++;
    }

    printf("%d", count);

    return 0;
}
