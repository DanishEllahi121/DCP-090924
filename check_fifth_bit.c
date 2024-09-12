#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number to check 5th bit: ");
    scanf("%d", &num);
    if ((num >> 4) & 1 == 1)
        printf("The fifth bit of %d is ON\n", num);
    else
        printf("The fifth bit of %d is Off\n", num);
    return 0;
}