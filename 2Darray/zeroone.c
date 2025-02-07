
#include <stdio.h>

int main() {
    int arr[3][4] = {{1, 0, 1, 1}, {0, 1, 0, 1}, {1, 0, 0, 1}};
    int maxcount = 0;
    int maxRow = -1;

    for (int i = 0; i < 3; i++) { // Loop through rows
        int count = 0;
        for (int j = 0; j < 4; j++) { // Loop through columns
            if (arr[i][j] == 1) {
                count++; // Count 1's in the current row
            }
        }
        if (count > maxcount) {
            maxcount = count; // Update max count
            maxRow = i;       // Update row index
        }
        }
    printf("The row with maximum number of 1's is: Row %d (Count = %d)\n", maxRow, maxcount);
    return 0;
}
