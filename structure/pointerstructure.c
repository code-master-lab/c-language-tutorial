#include <stdio.h>
#include <string.h>

// Define the Pokemon structure with stats and attributes
typedef struct pokemon {
    int hp;         // Health points
    int speed;      // Speed stat
    int attack;     // Attack power
    char tier;      // Strength ranking (e.g., 'A', 'B', etc.)
    char name[20];  // Pokemon name (string)
} pokemon;

int main() {
    // Create a Pikachu instance and initialize its stats
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.speed = 90;
    pikachu.attack = 55;
    pikachu.tier = 'A';                  // Set Pikachu's tier to 'A'
    strcpy(pikachu.name, "Pikachu");    // Set Pikachu's name

    // Create a pointer to hold the Pikachu structure
    pokemon *x = &pikachu;  // 'x' now holds the address of the 'pikachu' struct

    // Print memory addresses of each member in the structure
    printf("%p", &pikachu.hp);     // Address of 'hp'
    printf("\n%p", &pikachu.speed); // Address of 'speed'
    printf("\n%p", &pikachu.attack);// Address of 'attack'
    printf("\n%p", &pikachu.tier);  // Address of 'tier'
    printf("\n%p", &pikachu.name);  // Address of 'name' (first element of the array)
    printf("\n%p", x);              // Address of the entire 'pikachu' struct (same as &pikachu)

    return 0;
}