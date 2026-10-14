
#include <stdio.h>

int main()
{
    char str[1000];
    int frequency[26] = {0};

    scanf("%999s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            int index = str[i] - 'a';

            if (frequency[index] == 1)
            {
                printf("%c", str[i]);
                return 0;
            }

            frequency[index]++;
        }
    }

    printf("-1");

    return 0;
}
