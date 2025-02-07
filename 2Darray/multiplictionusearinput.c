#include <stdio.h>

int main()
{
    int r1, c1, r2, c2; // initialization of first row and coloumn second row and coloumn

    // give the dimensions for the first matrix
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    int a[r1][c1]; // initialization of 2d array a[i][j]
    // Input the element of  first matrix
    printf("Enter elements of the first matrix (%d x %d):\n", r1, c1);
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // give the  dimensions for the second matrix
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check matrix multiplication validity

    if (c1 != r2) // condition for matrix multiplication
    {
        printf("Matrix multiplication not possible. Columns of the first matrix must equal rows of the second matrix.\n");
        return 1;
    }

    int b[r2][c2]; // initialization of 2d array b[i][j]
    // Input the element of second matrix
    printf("Enter elements of the second matrix (%d x %d):\n", r2, c2);
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize the result matrix to 0

    int res[r1][c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            res[i][j] = 0;
        }
    }

    // Matrix multiplication

    // Loop through each row of the first matrix
    for (int i = 0; i < r1; i++)
    {
        // Loop through each column of the second matrix
        for (int j = 0; j < c2; j++)
        {
            // Initialize the result matrix element to 0
            res[i][j] = 0; // This ensures that we start with a clean slote for each element

            // Loop through each element of the current row of the first matrix
            // and the current column of the second matrix
            for (int k = 0; k < c1; k++)
            {
                // Multiply the elements and add to the result matrix element
                res[i][j] += a[i][k] * b[k][j]; // thise mense the product of the element A and B Matrix added in result res[i][j]
            }
        }
    }

    // Print the result matrix
    printf("Resultant matrix (%d x %d):\n", r1, c2);
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
