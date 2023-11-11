#include <iostream>
#include <vector>
#include <cassert>
#include "Pokemon.h"
#include "Trainer.h"

using namespace std;

int main()
{   
    Trainer t; // Trainer t = Trainer();

    cout << "testing default constructor" << endl;
    assert(t.getName() == "empty"); // Trainers getName

    Pokemon pikachu("pikachu", 35,55,30,90,50);
    Pokemon charizard("charizard",78,84,78,100,85);
    Pokemon squirtle("squirtle",44,48,65,43,50);

    vector<Pokemon> pokedex = {pikachu, charizard, squirtle};
    Badge demo = {"gold", "Misty"};

    Trainer ash("Ash", pikachu); // creating a trainer object with the name Ash and adding pikachu to Ash's _my_pokemons
    ash = Trainer("Ash", demo); // pikachu will get removed

    vector<Badge> badges = {demo};
    Trainer Misty("Misty", pokedex, badges);
    Misty.displayBadges();

    return 0;
}



/**
 * iPhone -> color, storage, model
 * class name -> iPhone
 * iPhone() -> default
 * {black, 128, basic}
 * iPhone() -> 1 parameter (storage)
 * {black, basic, storage = user_choice}
 * iPhone() -> 1 parameter (color)
 * {128, basic, color = user_choice}
 * iPhone() -> 3 parameters
 * 
 * 
 * iPhone p(256);
 * . . .
 * p.setstorage(512);
 * 
 * iPhone p1();
 * p1.setStorage(256)
*/