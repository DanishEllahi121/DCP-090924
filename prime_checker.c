#include <stdio.h>
int main()
{
    int num, i, is_prime = 1;
    printf("Enter the number to check Prime or Not: ");
    scanf("%d", &num);

    if (num < 2)
    {
        printf("The Number is Not Prime\n");
        return 0;
    }

    for (i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            is_prime = 0;
            break;
        }
    }
    if (is_prime)
    {
        printf("The Number is Prime\n");
    }
    else
    {
        printf("The Number is Not Prime\n");
    }
    return 0;
}