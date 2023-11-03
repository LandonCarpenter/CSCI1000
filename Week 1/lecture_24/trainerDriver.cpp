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

    Pokemon p;
    cout << p.getName() << endl; // Pokemons getName

    return 0;
}