#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the Two numbers A & B to swap: ");
    scanf("%d %d", &a, &b);
    printf("Before Swaping A = %d and B = %d\n ", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swaping A = %d and B = %d\n ", a, b);
    return 0;
}