#include <iostream>
#include <vector>
#include "Pokemon.h"
#include "Trainer.h"

using namespace std;

Trainer::Trainer()
{
    _name = "empty";

}

string Trainer::getName() const
{
    return _name;
}