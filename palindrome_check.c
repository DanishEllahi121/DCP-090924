#include <stdio.h>
void palin_check(int num);
int main()
{
    int num;
    printf("Enter the Number to check palindrome: ");
    scanf("%d", &num);
    palin_check(num);
    return 0;
}
void palin_check(int num)
{
    int remainder, original, reversed = 0;
    original = num;
    while (num > 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    if (original == reversed)
    {
        printf("The %d number is palindrome %d\n", original, reversed);
    }
    else
    {
        printf("The %d number is not palindrome %d\n", original, reversed);
    }
}
