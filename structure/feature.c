#include <stdio.h>
#include <string.h>

int main()
{
    // Define a structure named 'pokemon' with attributes: hp, speed, attack, tier, and name.
    typedef struct pokemon
    {
        int hp;        // Hit points of the pokemon
        int speed;     // Speed of the pokemon
        int attack;    // Attack power of the pokemon
        char tier;     // Tier level of the pokemon (e.g., 'a', 'b', etc.)
        char name[20]; // Name of the pokemon (up to 19 characters + null terminator)
    } pokemon;

    // Declare three variables of type 'pokemon': a, b, and c.
    pokemon a, b, c;

    // Assign values to the attributes of pokemon 'a'.
    a.attack = 100;              // Set attack power to 100
    a.hp = 100;                  // Set hit points to 100
    a.speed = 90;                // Set speed to 90
    a.tier = 'a';                // Set tier to 'a'
    strcpy(a.name, "blastoise"); // Set name to "blastoise"

    // Copy all attributes of pokemon 'a' to pokemon 'b'.
    b = a; // deep copy

    // Print the attack power of pokemon 'b' (which is the same as 'a').
    printf(" first value of B :%d", b.attack); // Output: 100
    // but you can change the value of b.attack
    b.attack = 200;                                            // change the value of b.attack
    printf("\n second value of B after change :%d", b.attack); // Output: 200
    // A is remain constant
    printf("\n%d", a.attack); // Output: 100

    return 0;
}