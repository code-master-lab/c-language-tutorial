// FIVE D ARRAY

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

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // printf("Enter element (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf(" 5D array is thise :\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
        printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}











