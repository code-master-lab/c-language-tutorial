#include <stdio.h>
int main()
{
    int n;
    printf(" enter a number of row and coloumn: ");
    scanf("%d", &n);
    printf(" enter all element :\n");
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
         for (int j = 0; j < n; j++)
        {
          scanf("%d", &arr[i][j]);
        }
    }

    //transform row into coloumn
    for (int i = 0; i < n; i++){
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
    for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
     }
     return 0;
}