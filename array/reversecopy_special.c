//Reverse copy without using extra variable
#include<stdio.h>

void reverse(int arr[]) {
    int i = 0;
    int j = 6;
    while(i < j) {
        // Swap arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    // No return here; let the function complete
}

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr); // Reverse the array
    for(int i = 0; i <= 6; i++) {
        printf(" %d", arr[i]); // Print the reversed array
    }
    return 0;
}
