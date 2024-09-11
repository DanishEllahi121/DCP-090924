#include <stdio.h>
int main()
{
    int n, next, second = 1, first = 0, i;
    printf("Enter the Number of Terms: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}