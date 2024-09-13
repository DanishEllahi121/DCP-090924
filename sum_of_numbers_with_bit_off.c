#include <stdio.h>
int main()
{
    int sum = 0, i;
    for (i = 1; i <= 28; i++)
    {
        if (((i >> 1) & 1) == 0)
            sum += i;
    }
    printf("The sum of Numbers whose second bit is off is : %d\n", sum);
    return 0;
}