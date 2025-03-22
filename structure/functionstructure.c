#include <stdio.h>
#include <string.h>

// Define Pokemon structure with base stats
typedef struct pokemon {
    int hp;         // Health points
    int speed;      // Speed stat
    int attack;     // Attack power
    char tier;      // Strength ranking
    char name[20];  // Pokemon name
} pokemon;

// Function attempts to modify Pokemon stats - BUT WORKS ON COPY
void change(pokemon p) {  // Parameter 'p' is a copy of original struct
    p.hp = 100;     // Changes only apply to local copy
    p.speed = 100;  // These modifications won't affect
    p.attack = 100; // the original structure outside this function
}

int main() {
    // Initialize Pikachu with base stats
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.speed = 90;
    pikachu.attack = 55;

    // Display original stats (BEFORE CHANGE ATTEMPT)
    printf("%d", pikachu.hp);     // Output: 60
    printf("\n%d", pikachu.speed); // Output: 90
    printf("\n%d", pikachu.attack);// Output: 55

    // Attempt to modify stats - NOTE: Pass-by-value means original remains unchanged
    change(pikachu);
    
    // Final stats remain unchanged (demonstrating pass-by-value behavior)
    return 0;
}