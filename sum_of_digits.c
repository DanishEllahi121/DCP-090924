#include <stdio.h>
void sum_num(int);
int main()
{
    int num;
    printf("Enter the number to find sum of digits: ");
    scanf("%d", &num);
    sum_num(num);
    return 0;
}
void sum_num(int num)
{
    int sum = 0, remainder, original;
    original = num;
    while (num > 0 || num < 0)
    {
        remainder = num % 10;
        sum += remainder;
        num = num / 10;
    }
    printf("The sum of digits of %d is %d\n", original, sum);
}