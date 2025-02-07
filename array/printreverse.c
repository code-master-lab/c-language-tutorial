#include<stdio.h>
int main() {
    int arr[5];

    // Input elements
    for (int i = 0; i <= 4; i++) {
        printf("\nEnter element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print elements in reverse order
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
