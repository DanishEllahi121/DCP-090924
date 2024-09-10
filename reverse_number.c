#include <stdio.h>
int main()
{
    int num, temp, reversed = 0, remainder;
    printf("Enter the Number to be Reversed: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0 || temp < 0)
    {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp = temp / 10;
    }
    printf("The reverse of %d is %d\n", num, reversed); // The reverse 123 is 321
    return 0;
}