#include <stdio.h>

int main() {
    int cp, sp;
    float percentage;

    printf("Enter the cost price: ");
    scanf("%d", &cp);

    printf("Enter the selling price: ");
    scanf("%d", &sp);

    if (sp > cp) {
        int profit = sp - cp;
        percentage = ((float)profit / cp) * 100;
        printf("Profit: %d\n", profit);
        printf("Profit percentage: %.2f%%\n", percentage);
    } else if (sp < cp) {
        int loss = cp - sp;
        percentage = ((float)loss / cp) * 100;
        printf("Loss: %d\n", loss);
        printf("Loss percentage: %.2f%%\n", percentage);
    } else if (sp==cp) {
        printf("No profit, no loss.\n");
    }

    return 0;
}
