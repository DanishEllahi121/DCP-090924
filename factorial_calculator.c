#include <stdio.h>
void fact_num(int num);
int main()
{
    int num;
    printf("Enter the number to check Its factorial: ");
    scanf("%d", &num);
    fact_num(num);
    return 0;
}
void fact_num(int num)
{
    int i, factorial = 1;
    for (i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    printf("The Factorial of %d is %d\n", num, factorial);
}