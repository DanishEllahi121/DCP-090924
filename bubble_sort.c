#include <stdio.h>
int bubble_sor(int arr[], int size);

int main()
{
    int size;
    printf("Enter the size of an Array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the Elements of an Array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubble_sor(arr, size);
    // printf("The sorted array is: %d", bubble_sor);
    return 0;
}
int bubble_sor(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)printf(" %d ", arr[j]);
    printf("\n");
    printf("The sorted array is as: %d\n", arr[i]);
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The sorted array is as: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}