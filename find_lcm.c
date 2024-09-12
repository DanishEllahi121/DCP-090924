#include <stdio.h>
void Lcm_check(int, int);
int main()
{
    int num1, num2;
    printf("Enter the Two Numbers Num1 & Num2: ");
    scanf("%d %d", &num1, &num2);
    Lcm_check(num1, num2);
    return 0;
}
void Lcm_check(int num1, int num2)
{
    int lcm = (num1 > num2) ? num1 : num2;
    while (lcm > 0)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
            break;
        else
            lcm++;
    }
    printf("The Lcm of %d and %d is: %d\n", num1, num2, lcm);
}