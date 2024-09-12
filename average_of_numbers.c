#include <stdio.h>
void aver_num(int n);
int main()
{
    int n;
    printf("Enter the The Value of N: ");
    scanf("%d", &n);
    aver_num(n);
    return 0;
}
void aver_num(int n)
{
    float i, sum = 0, num, average;
    printf("Enter the digits You want Average of: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &num);
        sum += num;
    }
    average = sum / n;
    printf("The Average is : %f\n", average);
}