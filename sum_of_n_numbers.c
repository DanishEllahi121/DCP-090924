#include <stdio.h>
void result_sum(int);
int main()
{
    int n;
    printf("Enter the Number of Terms: ");
    scanf("%d", &n);
    result_sum(n);
    return 0;
}
void result_sum(int n)
{
    int sum = 0, i;
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("The of Total terms is : %d\n", sum);
}