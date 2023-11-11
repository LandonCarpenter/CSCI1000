#include<iostream>
#include "Pokemon.h"

using namespace std;

// function that is taking an object as input and accessing or setting attributes
void printPokemon(Pokemon p)
{
    cout << "=========================================" << endl;
    cout << "Name: " << p.getName() << endl;
    cout << "HP: " << p.getHP() << endl;
    cout << "Attack: " << p.getAttack() << endl;
    cout << "Defense: " << p.getDefense() << endl;
    cout << "Speed: " << p.getSpeed() << endl;
    cout << "Max: " << p.getMax() << endl;
    cout << endl;
}


int main()
{
    Pokemon p; // what is happening in this line -> implicit call to default constructor-> 1 object in memory
    
    // another option to create objects
    // parameterized constructor

    Pokemon charmander("Charmander", 45.8, 20, 35, 10, 80);
    Pokemon bulbasaur = Pokemon("Bulbasaur", 45.8, 20, 35, 10, 80);

    charmander.printPokemon();//function in the class Pokemon.cpp
    printPokemon(charmander);// function above main

    
    Pokemon c = Pokemon();
    // An instance (object) of class Pokemon is created and is called p
    // p has 6 attributes;
    // numeric attributes can have 0 or garbage
    // char, string, vector will be empty or null
    // has some initial value

    cout << p.getAttack() << endl << p.getDefense() << endl << p.getHP() << endl << p.getName() << endl;

    p.setAttack(10);
    p.setName("Pikachu");
    p.setDefense(20);
    p.setHP(34.7);
    p.setSpeed(38);
    p.setMax(80);

    // a member function that the compiler provides by default and it initializes to garbage and empty
    // default constructor -> special member function
    // 1. no return type
    // 2. same name as the class
    // 3. it is called in a different fashion than a regular member function

    // // p._name = "pikachu";
    // p.setName("pikachu");
    // cout << p.getName() << endl; //

    // // p._HP = 200;

    // Pokemon c;
    // cout << c.getAttack() << endl;

    // string s1 = "name";
    // string s2 = "CSCI1300";
    // cout << s1.length() << endl;

    Pokemon pokedex[3] = {charmander};
    pokedex[1] = bulbasaur;
    pokedex[2] = Pokemon();

    return 0;
}