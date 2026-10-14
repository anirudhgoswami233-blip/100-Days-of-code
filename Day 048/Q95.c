
#include <stdio.h>

int main()
{
    char str1[1000], str2[1000], combined[2000];
    int len1 = 0, len2 = 0;
    int found = 0;

    scanf("%999s", str1);
    scanf("%999s", str2);

    while (str1[len1] != '\0')
        len1++;

    while (str2[len2] != '\0')
        len2++;

    if (len1 != len2)
    {
        printf("Not rotation");
        return 0;
    }

    for (int i = 0; i < len1; i++)
        combined[i] = str1[i];

    for (int i = 0; i < len1; i++)
        combined[len1 + i] = str1[i];

    combined[2 * len1] = '\0';

    for (int i = 0; i < len1; i++)
    {
        int j = 0;

        while (j < len2 && combined[i + j] == str2[j])
            j++;

        if (j == len2)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
