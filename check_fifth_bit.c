#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);

    if (((num >> 4) & 1) == 1)
    {
        printf("The fifth bit is ON\n ");
    }
    else
    {
        printf("The fifth bit is Off\n ");
    }
    return 0;
}