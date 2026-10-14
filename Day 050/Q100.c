
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int len;

    scanf("%999s", str);
    len = strlen(str);

    int first = 1;

    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (!first)
                printf(",");

            for (int k = i; k <= j; k++)
                printf("%c", str[k]);

            first = 0;
        }
    }

    return 0;
}
