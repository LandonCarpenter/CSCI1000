// at a minimum you need at least 3 files

// a program will only have 1 main()

// #include
// pre-processor directive

// header guards to avoid redefinition
// if there is no definition for Pokemon
#ifndef POKEMON_H
#define POKEMON_H

// class definition inside your header guard

#include <iostream>
using namespace std;

class Pokemon
{
    // access specifiers -> encapsulation
    public:
    // functions -> member functions -> inside a class
    //function prototypes
    Pokemon(); // default constructor -> no parameters
    Pokemon(string, double, int, int, int, int);

    // every attribute has at least 1 getter and 1 setter
    
    // setter or mutator -> updates/sets the attribute value
    // most setters are void
    void setHP(double); // void setHP(double HP);
    void setAttack(int);
    void setSpeed(int);
    void setDefense(int);
    void setMax(int);
    void setName(string);
    
    // getter or accessor -> accesses/returns the value of an attribute
    // most getters return something (matches the attribute data type) and takes no parameters

    double getHP() const;
    int getAttack() const;
    int getSpeed() const;
    int getDefense() const;
    int getMax() const;
    string getName() const;

    // other function that does something to the attributes
    void printPokemon() const;


    private:
    // variables -> data members/attributes/fields
    double _HP;
    int _attack;
    int _speed;
    int _defense;
    int _max;
    string _name;
};

#endif



// DO NOT PUT YOUR FUNCTION IMPLEMENTATION IN THE .h FILE