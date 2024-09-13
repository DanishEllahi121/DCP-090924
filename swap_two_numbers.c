#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the two numbers to swap: ");
    scanf("%d %d", &a, &b);
    printf("Before Swaping a = %d and b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swaping a = %d and b = %d\n", a, b);
    return 0;
}