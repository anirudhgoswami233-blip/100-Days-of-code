
#include <stdio.h>

int main()
{
    char date[20];

    scanf("%19s", date);

    printf("%.2s-Apr-%s", date, date + 6);

    return 0;
}
