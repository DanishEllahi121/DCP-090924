#include <stdio.h>
void rev_num(int num);
int main()
{
    int num;
    printf("Enter the Number to reverse: ");
    scanf("%d", &num);
    rev_num(num);
    return 0;
}
void rev_num(int num)
{
    int remainder, reverse = 0, original;
    original = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    printf("The reverse of %d is %d\n", original, reverse);
}