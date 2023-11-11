#include<iostream>
#include "Pokemon.h"

using namespace std;

    // implement all the functions in the Pokemon class

    // :: scope resolution operator

    // will initialize the object to what we want it to have
    Pokemon::Pokemon()
    {
        _HP = 0;
        _attack = 0;
        _defense = 0;
        _max = 0;
        _speed = 0;
        _name = "";
    }
    Pokemon::Pokemon(string name, double HP, int attack, int defense, int speed, int max)
    {
        _name = name;
        _HP = HP;
        _attack = attack;
        _defense = defense;
        _speed = speed;
        _max = max;
    }

    void Pokemon::setHP(double HP) // void setHP(double HP);
    {
        // update the _HP attribute in the class to what is passed in the parameter
        if (HP >= 0 && HP <= 100)
        {
            _HP = HP;
        }   
    }
    void Pokemon::setAttack(int attack)
    {
        _attack = attack;
    }
    void Pokemon::setSpeed(int speed)
    {
        _speed = speed;
    }
    void Pokemon::setDefense(int defense)
    {
        _defense = defense;
    }
    void Pokemon::setMax(int max)
    {
        _max = max;
    }
    void Pokemon::setName(string name)
    {
        _name = name;
    }
    
    // getter or accessor -> accesses/returns the value of an attribute
    // most getters return something (matches the attribute data type) and takes no parameters

    double Pokemon::getHP() const
    {
        // returns the value the getter is accessing
        return _HP;
    }
    int Pokemon::getAttack() const
    {
        return _attack;
    }
    int Pokemon::getSpeed() const
    {
        return _speed;
    }
    int Pokemon::getDefense() const
    {
        return _defense;
    }
    int Pokemon::getMax() const
    {
        return _max;
    }
    string Pokemon::getName() const
    {
        return _name;
    }

    

    // 1. When you are collaborating - hard to edit 1 file
    // 2. good structure
    // 3. re-compiles the class files if there is a change
    
    // data abstraction -> hide away the implementation
    void Pokemon::printPokemon() const
{
    cout << "=========================================" << endl;
    cout << "Name: " << getName() << endl;
    cout << "HP: " << getHP() << endl;
    cout << "Attack: " << getAttack() << endl;
    cout << "Defense: " << getDefense() << endl;
    cout << "Speed: " << getSpeed() << endl;
    cout << "Max: " << getMax() << endl;
    cout << endl;
}


void Pokemon::updateHP(double val)
{
    _HP -= val;
    if (_HP <= 0)
    {
        _HP = 0;
    }
    
}