#include "aquarium.h"


Aquarium::Aquarium()
{
    _aquarist_name = "";
    _gallons_used = 0;
}

Aquarium::Aquarium(string aquarist_name)
{
    _aquarist_name = aquarist_name;
    _gallons_used = 0;
}

void Aquarium::setName(string aquarist_name)
{
    _aquarist_name = aquarist_name;
}
// etc. for gallons used