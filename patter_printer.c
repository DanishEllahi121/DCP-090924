#include <stdio.h>
int main()
{
    int num, i, j;
    printf("Enter the NUmber: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}