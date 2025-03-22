// Create a structure type 'Person' with name,
// salary and age as its attributes. Declare and initialize 2
// variables for this. Print the name of first person and age
// of the other person.
#include <stdio.h>

// Define the Person structure
struct Person {
    char name[50];
    float salary;
    int age;
};

int main() {
    // Declare and initialize two Person variables
    struct Person person1 = {"Alice", 5000.5, 30};
    struct Person person2 = {"Bob", 6000.75, 25};
    
    // Print the name of the first person
    printf("Name of first person: %s\n", person1.name);
    // Print the age of the second person
    printf("Age of second person: %d\n", person2.age);
    
    return 0;
}