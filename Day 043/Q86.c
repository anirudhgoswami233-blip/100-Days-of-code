
#include <stdio.h>

int main()
{
    char str[1000];
    int length = 0;
    int palindrome = 1;

    scanf("%[^\n]", str);

    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
