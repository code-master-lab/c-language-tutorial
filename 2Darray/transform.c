// transform row into coloumn
#include <stdio.h>
int main()
{
    int r;
    printf(" enter a number of row : ");
    scanf("%d", &r);
    int c;
    printf(" enter number of coloumn: ");
    scanf("%d", &c);
     int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    //1 2 3
    //4 5 6

    //1 4
    //2 5
    //3 6
    // printf(" 2D array is thise :\n");
    for (int i = 0; i < c; i++){
    for (int j = 0; j < r; j++)
        {
            printf(" %d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int r, c;

//     // Input the number of rows and columns
//     printf("Enter the number of rows: ");
//     scanf("%d", &r);
//     printf("Enter the number of columns: ");
//     scanf("%d", &c);

//     int arr[r][c];  // Original matrix
//     int brr[c][r];  // Transposed matrix

//     // Input elements of the original matrix
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("Enter element (%d, %d): ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     // Transpose the matrix
//     for (int i = 0; i < c; i++) // Outer loop for columns of the original matrix
//     {
//         for (int j = 0; j < r; j++) // Inner loop for rows of the original matrix
//         {
//             brr[i][j] = arr[j][i]; // Transpose logic
//         }
//     }

//     // Print the transposed matrix
//     printf("\nThe transposed matrix is:\n");
//     for (int i = 0; i < c; i++) // Loop over rows of transposed matrix
//     {
//         for (int j = 0; j < r; j++) // Loop over columns of transposed matrix
//         {
//             printf("%d ", brr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
