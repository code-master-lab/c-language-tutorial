//In this script total 3 program are written but only one program is active at a time.
#include <stdio.h>
int main()
{
   struct pokemon  // usear define a structure
   {
      int hp;    // thise are the attribute of pokemon
      int speed;
      int attack;
      char tier;
   };

   struct pokemon pikachu;   // pikachu is a variable of type struct pokemon
   printf(" enter a pikachu.attack =");  //printf for pikachu.attack
   scanf("%d", &pikachu.attack);       //scanf for pikachu.attack
   pikachu.hp = 50;                    //use dot operatery to give value in hp
   pikachu.speed = 100;
   pikachu.tier = 'A';
   printf("Pikachu's attack: %d\n", pikachu.attack);  //printing pikachu.attack
   struct pokemon charizard;
   charizard.attack = 130;
   charizard.hp = 80;
   charizard.speed = 80;
   charizard.tier= 's';
   printf(" charizard tier :%c\n", charizard.tier); 
   struct pokemon mewtwo;
   mewtwo.attack = 130; 
   mewtwo.hp = 80;
   mewtwo.speed = 80;
   mewtwo.tier = 'g'; 
   printf(" mewtwo tier :%c", mewtwo.tier); 
   return 0;
}

#include <stdio.h>
int main()
{
   struct pokemon  // usear define a structure
   {
      int hp;    // thise are the attribute of pokemon
      int speed;
      int attack;
      char tier;
   } pikachu,charizard,mewtwo;   // pikachu charizard,mewtow is a variable type of struct pokemon

      
   printf(" enter a pikachu.attack =");  //printf for pikachu.attack
   scanf("%d", &pikachu.attack);       //scanf for pikachu.attack
   pikachu.hp = 50;                    //use dot operatery to give value in hp
   pikachu.speed = 100;
   pikachu.tier = 'A';
   printf("Pikachu's attack: %d\n", pikachu.attack);  //printing pikachu.attack
   
   charizard.attack = 130;
   charizard.hp = 80;
   charizard.speed = 80;
   charizard.tier= 's';
   printf(" charizard tier :%c\n", charizard.tier); 
   
   mewtwo.attack = 130; 
   mewtwo.hp = 80;
   mewtwo.speed = 80;
   mewtwo.tier = 'g'; 
   printf(" mewtwo tier :%c", mewtwo.tier); 
   return 0;
}



#include <stdio.h>
int main()
{
     // 1. Declaration of Structure
   struct pokemon  
   {
      int hp;   
      int speed;
      int attack;
      char tier;
   };
   // 2. Initialization of Structure
   struct pokemon pikachu ={ 84,101,67,'v'};

    // 3. Accessing Structure Members
   printf("Pikachu's attack: %d\n", pikachu.attack);
   
   return 0;
}