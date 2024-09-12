#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter the Number to get table: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        printf("The Table %d X %d is: %d\n", num, i, (num * i));
    }
    return 0;
}