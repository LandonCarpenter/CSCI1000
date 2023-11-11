#ifndef TRAINER_H
#define TRAINER_H

// noun vs. verb
//  ^        ^
//  |        |
// class   function

#include <iostream>
#include <vector>
#include "Pokemon.h"

using namespace std;


struct Badge
{
    string type; // gold, silver, bronze
    string trainer_defeated;
};


class Trainer
{
private:
    string _name;
    // any standard data type should have a getter and setter
    // you can only have one pokemon with the same name
    vector<Pokemon> _my_pokemons;
    // add, remove, find/search, how many elements, update
    int _num_pokemons;
    // badge - name, trainer they defeated
    vector<Badge> _badges;
    

public:
    Trainer();
    Trainer(string, vector<Pokemon>, vector<Badge>); // find and add OR just add if add also finds it
    Trainer(string, Pokemon); // add and find
    Trainer(string, Badge);

    string getName() const;
    void setName(string);

    // functionality for _my_pokemons
    bool addPokemon(Pokemon);// Pokemon, vector<Pokemon>
    bool removePokemon(string); // Pokemon, int, string
    int findPokemon(string); // Pokemon, string
    int getNumPokemons() const;
    // getter and setter for element in a vector / array
    Pokemon getPokemonAt(int) const;
    bool setPokemonAt(int, Pokemon);

    //  badges functions
    bool addBadge(Badge);
    void displayBadges() const;
};





#endif