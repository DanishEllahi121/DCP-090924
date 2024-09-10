#include <stdio.h>
int main()
{
    int num, sum = 0, temp, remainder;
    printf("Enter the Number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0 || temp < 0)
    {
        remainder = temp % 10;
        sum += remainder;
        temp = temp / 10;
    }
    printf("The sum of %d is %d\n", num, sum);
    return 0;
}