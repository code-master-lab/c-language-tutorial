#include<stdio.h>

void tower(int n, char s, char h, char d) {
    if (n == 0) return;
    tower(n - 1, s, d, h);  // Move (n-1) disks from source to helper
    printf("%c -> %c\n", s, d);  // Move the nth disk from source to destination
    tower(n - 1, h, s, d);  // Move (n-1) disks from helper to destination
    return;
}

int main() {
    int n; 
    printf("Enter number of disks: ");
    scanf("%d", &n);
 
    tower(n, 'A', 'B', 'C');  // Use 'A', 'B', and 'C' as the pegs
    return 0;
}


