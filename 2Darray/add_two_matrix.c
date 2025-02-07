// write a programe and add a two matrix
#include <stdio.h>

int main()
{
    int r, c;

    // Input: Dimensions of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int matrix1[r][c], matrix2[r][c], sum[r][c];

    // Input: First matrix
    printf("\nEnter elements of the first matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input: Second matrix
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculating the sum of the two matrices
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Output: Display the sum matrix
    printf("\nSum of the matrices:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}