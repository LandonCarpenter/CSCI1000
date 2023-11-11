#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include "Pokemon.h"
#include "Trainer.h"

using namespace std;

class Game
{
    public:
        Game();
        Game(Trainer);

        // getters
        int getCurrentPokemons() const;

        // other member functions
        int loadPokemons(string); // stores the pokemon from the given file into _wild_pokemons and returns the number of pokemons currently stored
        void battle(Trainer);
        void startGame(); // game setup

        void restPokemons();
        void readStats();


    private:
        const static int _TOTAL_POKEMONS = 150;
        Pokemon _wild_pokemons[_TOTAL_POKEMONS]; // 150
        int _current_num_pokemons;
        Trainer _player;

};

#endif