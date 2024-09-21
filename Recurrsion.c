#include <stdio.h>
int sum_num(int num);
int main()
{
    int num, sum = 0;
    printf("Enter the number you want sum upto : ");
    scanf("%d", &num);
    int result = sum_num(num);
    printf("The sum of your numbers is %d\n", result);
    return 0;
}
int sum_num(int num)
{
    if (num > 0)
    {
        return num + sum_num(num - 1);
    }
    else
    {
        return 0;
    }
}