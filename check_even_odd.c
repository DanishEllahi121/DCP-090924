#include <stdio.h>
int is_even(int num);
int main()
{
    int num;
    printf("Enter the Number to check for Even or Odd:");
    scanf("%d", &num);

    if (is_even(num))
    {
        printf("The number %d is Even \n", num);
    }
    else
    {
        printf("The Number %d is Odd \n", num);
    }
    return 0;
}
int is_even(int num)
{
    return (num & 1) == 0;
}