#include <stdio.h>
void palindrome_check(int);
int main()
{
    int num;
    printf("Enter the number to check Palindrome: ");
    scanf("%d", &num);
    palindrome_check(num);
    return 0;
}
void palindrome_check(int num)
{
    int reversed = 0, remainder, original;
    original = num;
    while (num > 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    if (reversed == original)
    {
        printf("The number %d is Palindrome\n", original);
    }
    else
    {
        printf("The number %d is not Palindrome\n", original);
    }
}