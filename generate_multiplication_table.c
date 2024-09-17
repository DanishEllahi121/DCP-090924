#include <stdio.h>
void multi_table(int num);
int main()
{
    int num;
    printf("Enter the Number for Table: ");
    scanf("%d", &num);
    multi_table(num);
    return 0;
}
void multi_table(int num)
{
    int i;
    printf("The table of %d is given below: \n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, (num * i));
    }
}