// thise programme is related to students number and mark
//Giving a marks of number of students
//row is defind number of student and coloumn define number of mark
#include <stdio.h>
int main() {
    int students;

    // Input: Number of students
    printf("Enter the number of students: ");
    scanf("%d", &students);

    int marks[students][3]; // 2D array: rows = students, columns = 3 (Physics, Chemistry, Math)

    // Input: Marks for each student
    for (int i = 0; i < students; i++) {
        printf("Enter marks for Student %d (Physics, Chemistry, Math): ", i + 1);
        scanf("%d %d %d", &marks[i][0], &marks[i][1], &marks[i][2]);
    }

    // Output: Display marks in table format
    printf("\nStudent\tPhysics\tChemistry\tMath\n");
    for (int i = 0; i < students; i++) {
        printf("%d\t%d\t%d\t\t%d\n", i + 1, marks[i][0], marks[i][1], marks[i][2]);
    }

    return 0;
} 