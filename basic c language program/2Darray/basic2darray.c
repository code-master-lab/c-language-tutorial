
// #include<stdio.h>
// int main(){

//     //1,2
//     //3,4
//     int arr[2][2]= {{1,2},{3,4}};
//     //arr [0],[0] =1;
//     //arr [0],[1] =2;
//     //arr[1],[0] =3;
//     //arr [1],[1] =4;
//     printf(" {%d %d},{%d %d}",arr [0][0], arr[0][1],arr[1][0], arr[1][1]);
//     return 0;
// }

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
    printf(" 2D array is thise :\n");
    for (int i = 0; i < r; i++)
    {

      
        for (int j = 0; j < c; j++)
        {
            printf(" %d ", arr[i][j]);
        
              
        }
        printf("\n");
    }


    return 0;
}