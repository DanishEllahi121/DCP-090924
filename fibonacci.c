#include <stdio.h>
void fibonacci_series(int);
int main()
{
    int num;
    printf("Enter the Number to print fibonacci series: ");
    scanf("%d", &num);
    fibonacci_series(num);
    return 0;
}
void fibonacci_series(int num)
{
    int first = 0, second = 1, next, i;
    printf("The fibonacci Series is : ");
    for (i = 0; i < num; i++)
    {
        printf("%d", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}