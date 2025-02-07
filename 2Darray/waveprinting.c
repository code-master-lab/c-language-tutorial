#include <stdio.h>
int main()
{
    int r;
    printf(" enter a number of row :");
    scanf("%d", &r);
    int c;
    printf(" enter a number of column :");
    scanf("%d", &c);
    int wave[r][c];
    printf(" \n enter a element of wave array :");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &wave[i][j]);
        }
    }
    // wave printing
    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d ", wave[i][j]);
            }
            printf("\n");
        }
        else
        {
            for (int j = c - 1; j >= 0; j--)
            {
                printf("%d ", wave[i][j]);
            }

            printf("\n");
        }
    }

    return 0;
}