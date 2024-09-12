#include <stdio.h>
int main()
{
    int a = 3, b = 7;
    printf("Bitwise And of A = %d and B = %d is : %d \n", a, b, (a & b));
    printf("Bitwise OR of A = %d and B = %d is : %d \n", a, b, (a | b));
    printf("Bitwise XOR of A = %d and B = %d is : %d \n", a, b, (a ^ b));
    printf("Bitwise NOT of A = %d is : %d \n", a, (~a));
    printf("Left Shift of A = %d is : %d \n", a, (a << 2));
    printf("Right Shift of B = %d is : %d \n", a, (b >> 1));

    return 0;
}