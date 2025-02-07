// This programmethere is multiplication of two code matrix a and Matrix B
// And we have to multiply them and store the result in a new matrix res
// The number of columns of matrix A should be equal to the number of rows of matrix B
// This two matrix is not a user input matrix

#include <stdio.h>
int main()
{
    // 1 2
    // 3 4
    // 5 6
    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    // 1 2 3 4
    // 5 6 7 8
    int b[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};

    // result matrix initialization
    int res[3][4];
    
    // matrix multiplication
    int rc = 2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // i row of a [][] and j coloumn of b [][]
            //( a[i][0],a[i][1],a[i][2],a[i][3] ) * (b[0][j],b[1][j],b[2][j],b[3][j])
            res[i][j] = 0;
            for (int k = 0; k < rc; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // print result
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}