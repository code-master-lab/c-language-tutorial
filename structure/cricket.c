#include <stdio.h>
#include <string.h>

int main() {
    typedef struct cricketer {
        char name[50];
        int age;
        int matches;
        float avg_runs;
    } cricketer;

    cricketer arr[20];

    // Input loop for 20 cricketers
    for(int i = 0; i < 20; i++) {
        printf("\nEnter details for Cricketer %d:\n", i+1);
        
        printf("Name (max 49 letters): ");
        getchar(); // To consume the newline character left by previous scanf
        fgets(arr[i].name, 50, stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0'; // Remove the newline character
        
        printf("Age: ");
        scanf("%d", &arr[i].age);
        
        printf("Number of test matches: ");
        scanf("%d", &arr[i].matches);
        
        printf("Average runs: ");
        scanf("%f", &arr[i].avg_runs);
    }

    // Display all entries
    printf("\n\nCricketer Records:\n");
    for (int i = 0; i < 20; i++) {
        printf("\nName: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("Matches: %d\n", arr[i].matches);
        printf("Average Runs: %.2f\n", arr[i].avg_runs);
    }

    return 0;
}