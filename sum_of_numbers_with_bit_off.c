#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 1; i <= 28; i++)
    {
        if (((i >> 1) & 1) == 0)
        {
            sum += i;
        }
    }
    printf("The sum is = %d\n ", sum);
    return 0;
}