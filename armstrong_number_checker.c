#include <stdio.h>
void arm_check(int);
int main()
{
    int num;
    printf("Enter the number to check for Armstrong: ");
    scanf("%d", &num);
    arm_check(num);
    return 0;
}
void arm_check(int num)
{
    int original, remainder, result = 0;
    original = num;
    while (num > 0)
    {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num = num / 10;
    }
    if (original == result)
    {
        printf("The Number %d is Armstrong\n", original);
    }
    else
    {
        printf("The Number %d is not Armstrong\n", original);
    }
}