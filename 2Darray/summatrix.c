#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    int c;
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int arr[r][c];

    // Input: Elements of the matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Output: Display the matrix
    printf("\nThe matrix is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of all elements in the matrix
    int sum = 0;
    for (int i = 0; i < r; i++) // Corrected condition to i < r
    {
        for (int j = 0; j < c; j++) // Corrected condition to j < c
        {
            sum += arr[i][j];
        }
    }

    printf("\nThe sum of all elements in the matrix is: %d\n", sum);

    return 0;
}
