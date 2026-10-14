
#include <stdio.h>

int main()
{
    char str1[1000], str2[1000];
    int frequency[256] = {0};
    int anagram = 1;

    scanf("%999s", str1);
    scanf("%999s", str2);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        frequency[(unsigned char)str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0'; i++)
    {
        frequency[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (frequency[i] != 0)
        {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}
