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

class Trainer
{
private:
    string _name;
    vector<Pokemon> _myPokemon;
public:
    Trainer();
    string getName() const;
    void setName();
};

// Trainer::Trainer(/* args */)
// {
// }

// Trainer::~Trainer()
// {
// }




#endif