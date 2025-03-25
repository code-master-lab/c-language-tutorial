#include <stdio.h>

int main() {
    int n;
    printf(" enter n : ");
    scanf("%d", &n);  // Input n

    int r;
    printf(" enter r :");
    scanf("%d", &r);  // Input r

    int nfact = 1;  // n!
    int rfact = 1;  // r!
    int nrfact = 1; // (n-r)!

    // Calculate n!
    for (int i = 2; i <= n; i++) {
        nfact = nfact * i;
    } 

    // Calculate r!
    for (int i = 2; i <= r; i++) {
        rfact = rfact * i;
    }

    // Calculate (n-r)!
    for (int i = 2; i <= n - r; i++) {
        nrfact = nrfact * i;
    }

    // Calculate nCr = n! / (r! * (n-r)!)
    int ncr = nfact / (rfact * nrfact);

    // Output the result
    printf("%d", ncr);

    return 0;
}













