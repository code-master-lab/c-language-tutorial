#include <stdio.h>
void fun(int arr[]) // In this function the array is same Without using pointer the value is passing
{            
    int temp; // here address is passing of actual value
    temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return;
}

int main()
{
    int arr[2] = {2, 9};
    printf(" %d,%d\n", arr[0], arr[1]);
    fun(arr);
    printf("%d,%d\n", arr[0], arr[1]);

    return 0;
}