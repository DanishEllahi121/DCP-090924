#include <stdio.h>
void arm_check(int num);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    arm_check(num);
    return 0;
}
void arm_check(int num)
{
    int remainder, new = 0, original;
    original = num;
    while (num > 0)
    {
        remainder = num % 10;
        new += remainder *remainder *remainder;
        num = num / 10;
    }
    if (original == new)
    {
        printf("The number %d is armstrong\n", new);
    }
    else
    {
        printf("The number %d is not armstrong\n", new);
    }
    return 0;
}