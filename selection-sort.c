#include <stdio.h>
int select_sort(int arr[], int size);

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
    select_sort(arr, size);
    return 0;
}
int select_sort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
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