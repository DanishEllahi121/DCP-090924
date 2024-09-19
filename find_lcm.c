#include <stdio.h>
void lcm_num(int, int);
int main()
{
    int num1, num2;
    printf("Enter the two numbers to check lcm: ");
    scanf("%d %d", &num1, &num2);
    lcm_num(num1, num2);
    return 0;
}
void lcm_num(int num1, int num2)
{
    int i, lcm;
    lcm = (num1 > num2) ? num1 : num2;
    for (i = 0; i < lcm; i++)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            break;
        }
        lcm++;
    }
    printf("The %d is the lcm of %d and %d\n", lcm, num1, num2);
}