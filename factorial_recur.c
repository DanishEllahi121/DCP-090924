#include <stdio.h>
int fact_rial(int num);
int main()
{
    int num;
    printf("Enter the number to find factorial: ");
    scanf("%d", &num);
    int facto = fact_rial(num);
    printf("the factorial of given number is: %d\n", facto);
    return 0;
}
int fact_rial(int num)
{
    int factorial = 1;
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * fact_rial(num - 1);
    }
}