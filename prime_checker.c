#include <stdio.h>
int prime_check(int num);
int main()
{
    int num;
    int is_prime;
    printf("Enter the Number to check prime: ");
    scanf("%d", &num);
    is_prime = prime_check(num);
    if (is_prime)
    {
        printf("The number %d is prime\n", num);
    }
    else
    {
        printf("The number %d is not prime\n", num);
    }
    return 0;
}
int prime_check(int num)
{
    int i;
    if (num <= 1)
    {
        return 0;
    }
    if (num == 2)
    {
        return 1;
    }
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}