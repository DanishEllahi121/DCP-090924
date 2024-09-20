#include <stdio.h>
int main()
{
    float average;
    int i, sum = 0, totalnum = 0;

    printf("Enter the number of Elements :");
    scanf("%d", &totalnum);

    int arr[totalnum];
    printf("\nEnter the Elements of Array: ");
    for (i = 0; i < totalnum; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < totalnum; i++)
    {
        sum += arr[i];
    }
    average = (float)sum / (totalnum);
    printf("\nThe sum of total elements is : %d", sum);
    printf("\nThe average of total elements is : %f\n", average);

    return 0;
}