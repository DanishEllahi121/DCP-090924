#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the Two Numbers Num1 & Num2: ");
    scanf("%d%d", &num1, &num2);

    int max = (num1 > num2) ? num1 : num2;
    printf("%d\n", max);

    return 0;
}