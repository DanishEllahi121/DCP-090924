#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE], i, n, choice, pos, element;
    printf("Enter the size of an Array: ");
    scanf("%d", &n);

    // Ask for elements from user
    printf("Enter the elements of an array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter your choice\n1.Insert Element \n2.Delete Element\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter the position of at which you want to enter (1 to %d):", n + 1);
        scanf("%d", &pos);
        printf("\nEnter the element you want to enter : ");
        scanf("%d", &element);

        for (i = n; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = element;
        n++;

        printf("\nArray after Insertion: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else if (choice == 2)
    {
        printf("\nEnter the position at which  you want to delete (1 to %d): ", n);
        scanf("%d", &pos);

        // shifting element for right to left
        for (i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("\nArray after Deletiong: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("\nInvalid Choice");
    }
    return 0;
}