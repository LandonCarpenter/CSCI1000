#include <iostream>
#include <vector>
#include "Pokemon.h"
#include "Trainer.h"

using namespace std;

Trainer::Trainer()
{
    _name = "empty";
    _my_pokemons.clear(); // set it to empty, remove all elements in the vector and set size to 0
    _badges.clear();
}

Trainer::Trainer(string name, Badge b)
{
    _name = name;
    _badges.push_back(b);
    _my_pokemons.clear(); // explicitly set pokemons to 0
}

Trainer::Trainer(string name, vector<Pokemon> pvec, vector<Badge> bvec)
{
    _name = name;
    // update _my_pokemons to what is there in pvec
    for (int i = 0; i < (int)pvec.size(); i++)
    {
        // check if pvec.at(i) doesn't exist in _my_pokemons
        _my_pokemons.push_back(pvec.at(i));
    }

    for (int i = 0; i < (int)bvec.size(); i++)
    {
        // check if pvec.at(i) doesn't exist in _my_pokemons
        _badges.push_back(bvec.at(i));
    }
    
    
}

Trainer::Trainer(string name, Pokemon p)
{
    _name = name;
    _my_pokemons.push_back(p);
    _badges.clear();
}

string Trainer::getName() const
{
    return _name;
}

bool Trainer::addPokemon(Pokemon p)
{
    //1. findPokemon(p.getName())
    //2. if step 1 is true, return false
    //3. ohterwise add pokemon p to vector, update _num_pokemons and return true
    
    _my_pokemons.push_back(p);
    return true;
}

int Trainer::findPokemon(string name)
{
    int index = -1;
    //1. search if we have a pokemon with the same name then return index
    return index;
}

bool Trainer::setPokemonAt(int index, Pokemon p)
{
    // check if p exists
    // index -> 0 and _num_pokemons
    //search for pokemon through findPokemon()
    int found;
    found = findPokemon(p.getName());
    if (index >= 0 && index < _num_pokemons && found == -1)
    {
        _my_pokemons.at(index) = p;
        return true;
    }
    else
    {
        return false;
    }
}

int Trainer::getNumPokemons() const
{
    return _num_pokemons;
}



bool Trainer::addBadge(Badge b)
{
    _badges.push_back(b);
    return true;
}


void Trainer::displayBadges() const
{
    cout << "Badges earned: " << _badges.size() << endl;
    for (int i = 0; i < (int) _badges.size(); i++)
    {
        cout << "Type: " << _badges.at(i).type << endl;
        cout << "Trainer defeated: " << _badges.at(i).trainer_defeated << endl;
    }
    
}