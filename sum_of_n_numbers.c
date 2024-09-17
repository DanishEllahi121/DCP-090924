#include <stdio.h>
void sum_num(int num);
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    sum_num(num);
    return 0;
}
void sum_num(int num)
{
    int sum = 0, i;
    for (i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("The sum is : %d\n", sum);
}