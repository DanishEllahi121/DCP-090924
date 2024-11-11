#include <stdio.h>
#define MAX 4
int find(int arr1[], int n);

int main()
{
    int arr1[MAX], n, i, idx;
    printf("Enter the elements of Array: ");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the target Element: ");
    scanf("%d", &n);
    idx = find(arr1, n);
    if (idx == -1)
        printf("Element Not found\n");
    else
        printf("Element found at Index: %d\n", idx);
    return 0;
}
int find(int arr1[], int n)
{
    for (int i = 0; i < MAX; i++)
    {
        if (arr1[i] == n)
            return i;
    }
    return -1;
}