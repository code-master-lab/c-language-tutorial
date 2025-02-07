#include<stdio.h>
int main(){
    int marks[6];

    // Input marks for 10 students
    for (int i = 0; i < 6; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Find and display students with marks <= 35
    printf("\nStudents who scored 35 or below:\n");
    for (int i = 0; i < 6; i++) {
        if (marks[i] <= 35) {
            printf("Student %d scored %d\n", i + 1, marks[i]);
        }
    }

    return 0;
}
