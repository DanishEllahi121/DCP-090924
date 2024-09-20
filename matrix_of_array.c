#include <stdio.h>
int main()
{
    int i, j, rows, cols;
    printf("Enter the total No of Rows and Columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    printf("Enter the Elements of matrix: ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Matrix is given below:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}