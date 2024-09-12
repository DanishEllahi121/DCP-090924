#include <stdio.h>
void bit_wise(int, int);
int main()
{
    int a, b;
    printf("Enter the two Number to operate on them: ");
    scanf("%d %d", &a, &b);
    bit_wise(a, b);
    return 0;
}
void bit_wise(int a, int b)
{
    printf("The Bitwise AND of A = %d & B = %d is %d\n", a, b, (a & b));
    printf("The Bitwise OR of A = %d | B = %d is %d\n", a, b, (a | b));
    printf("The Bitwise XOR of A = %d & B = %d is %d\n", a, b, (a ^ b));
    printf("The Bitwise NOT of A = %d is %d\n", a, (~a));
    printf("The left shift of A = %d is %d\n", a, (a << 2));
    printf("The Right shift of B = %d is %d\n", b, (b >> 1));
}