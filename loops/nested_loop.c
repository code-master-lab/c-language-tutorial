#include <stdio.h>

int main()
{
    int n, m;
    printf(" enter a row :");
    scanf("%d", &n);
    printf(" enter a coloumn :");
    scanf("%d", &m);

    // Outer loop for rows
    for (int i = 1; i <= n; i++)
    {

        // Inner loop for columns
        for (int j = 1; j <= m; j++)
        {
            printf("* ");
        }
        // Move to the next line after inner loop completes
        printf("\n");
    }

    return 0;
}