// write a program to rotate its own mattress 90 degree clockwise
#include <stdio.h>
int main()
{
    int n;
    printf(" enter a number of row and coloumn: ");
    scanf("%d", &n);
    printf(" enter all element :\n");
    int arr[n][n];
    // input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // transform
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // swap arr[i][j] and arr[j][i]
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        printf("\n");
    }

    // printing the transpose of a matrix
    printf(" transpose row into coloumn \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    // rotate 90 degree clockwise
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int k = 2;
        while (j < k)
        {
            // swap arr [i][j] and arr[i][k]
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    printf("\n");

    // rotate 90 degree clockwise
    printf(" rotate 90 degree\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}