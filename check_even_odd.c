#include <stdio.h>
void is_even(int num);
int main()
{
    int num;
    printf("Enter the Number to check: ");
    scanf("%d", &num);
    is_even(num);
    return 0;
}
void is_even(int num)
{
    if (num % 2 == 0)
    {
        printf("The number %d is even\n", num);
    }
    else
    {
        printf("The number %d is odd\n", num);
    }
}