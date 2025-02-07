//Write a program to print the row number having the maximum sum in a given matrix

#include <stdio.h>

int main() {
    int rows, cols;

    // Input: Dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Input: Matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Variables to track the maximum sum and the corresponding row index
    int maxSum = -2147483648; // Initialize to the smallest possible integer
    int maxRow = -1;

    // Traverse each row to calculate the sum
    for (int i = 0; i < rows; i++) {
        int rowSum = 0; // Variable to store the sum of the current row
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        // Update maxSum and maxRow if the current rowSum is greater
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }

    // Output: Row with the maximum sum
    printf("\nRow with the maximum sum is: Row %d (Sum = %d)\n", maxRow, maxSum);

    return 0;
}
