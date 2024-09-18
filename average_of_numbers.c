#include <stdio.h>
void aver_num(int num);
int main()
{
    int num;
    printf("Enter the Number upto you want sum & average: ");
    scanf("%d", &num);
    aver_num(num);
    return 0;
}
void aver_num(int num)
{
    int sum = 0, i;
    for (i = 0; i <= num; i++)
    {
        sum += i;
    }
    float average = sum / 2.0;
    printf("The sum  and average  upto %d is %d & %f\n", num, sum, average);
}