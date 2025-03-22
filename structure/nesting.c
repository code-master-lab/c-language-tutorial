#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct pokemon
    { // actual structure of pokemon
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    } pokemon;
    typedef struct legenderypokemon// new structure of legenderypokemon using all attributes of pokemon with help of nesting
    {                     
        pokemon normal;   // nested structure of pokemon using all attributes of pokemon
        char ability[10]; // attribute of legenderypokemon
    } legenderypokemon;
    typedef struct godpokemon // new structure of godpokemon using all attributes of legenderypokemon with help of nesting
    {                            
        legenderypokemon lenged; // nested structure of legenderypokemon using all attributes of legenderypokemon
        int specialpower;        // attribute of godpokemon
    } godpokemon;
    // Godpokemon have all access of all the attributes of pokemon,legenderypokemon and godpokemon
    godpokemon arceus;
    arceus.specialpower = 1000;
    strcpy(arceus.lenged.ability, "turnintostone");
    strcpy(arceus.lenged.normal.name, "arceus");
    arceus.lenged.normal.attack = 1000;
    arceus.lenged.normal.hp = 2000;
    arceus.lenged.normal.speed = 2000;
    arceus.lenged.normal.tier = 'S';
    printf("Basic information\nName: %s\n", arceus.lenged.normal.name);
    printf("Attack: %d\n", arceus.lenged.normal.attack);
    printf("HP: %d\n", arceus.lenged.normal.hp);
    printf("Speed: %d\n", arceus.lenged.normal.speed);
    printf("Tier: %c\n\n", arceus.lenged.normal.tier);
    printf("Special thing\nAbility: %s\n", arceus.lenged.ability);
    printf("Special Power: %d\n", arceus.specialpower);

    legenderypokemon mewtwo;
    strcpy(mewtwo.ability, "Psychic");
    strcpy(mewtwo.normal.name, "mewtwo");
    mewtwo.normal.attack = 700;
    mewtwo.normal.hp = 1500;
    mewtwo.normal.speed = 1700;
    mewtwo.normal.tier = 'A';

    return 0;
}