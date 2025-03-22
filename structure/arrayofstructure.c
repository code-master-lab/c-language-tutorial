#include <stdio.h>
#include <string.h>

int main() {
    // Define Pokemon structure template
    typedef struct pokemon {
        int hp;          // Health points
        int speed;       // Speed stat
        int attack;     // Attack power
        char tier;      // Battle tier rating
        char name[20];   // Pokemon name (string storage)
    } pokemon;

    // Create array of 3 Pokemon
    pokemon arr[3];

    // Initialize Pikachu's stats
    strcpy(arr[0].name, "pikachue");
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 130;
    arr[0].tier = 'A';

    // Initialize Mewtwo's stats
    strcpy(arr[1].name, "mewtwo");
    arr[1].attack = 70;
    arr[1].hp = 150;
    arr[1].speed = 170;
    arr[1].tier = 'A';

    // Initialize Charmander's stats
    strcpy(arr[2].name, "charmander");
    arr[2].attack = 60;
    arr[2].hp = 70;
    arr[2].speed = 200;
    arr[2].tier = 'K';

    // Display all Pokemon information
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", arr[i].name);
        printf("Attack: %d\n", arr[i].attack);
        printf("HP: %d\n", arr[i].hp);
        printf("Speed: %d\n", arr[i].speed);
        printf("Tier: %c\n\n", arr[i].tier);
    }

    return 0;
}