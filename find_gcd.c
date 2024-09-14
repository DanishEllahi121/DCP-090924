#include <stdio.h>
void gcd_num(int, int);
int main()
{
    int num1, num2;
    printf("Enter the two numbers to check GCD: ");
    scanf("%d %d", &num1, &num2);
    gcd_num(num1, num2);
    return 0;
}
void gcd_num(int num1, int num2)
{
    int i, count = 1;
    for (i = 1; i <= num1, i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            count = i;
        }
    }
    printf("The Greatest Common Divisor of %d and %d is %d\n", num1, num2, count);
}