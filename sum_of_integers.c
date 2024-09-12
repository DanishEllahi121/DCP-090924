#include <stdio.h>
int main()
{
    int sum = 0, i;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("The sum of first 10 positive intergers is : %d\n", sum);
    return 0;
}