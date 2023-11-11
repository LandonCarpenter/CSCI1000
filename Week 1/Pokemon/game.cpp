#include <iostream>
#include <vector>
#include <cassert>
#include "Pokemon.h"
#include "Trainer.h"
#include "Game.h"

using namespace std;


Game::Game()
{
    _current_num_pokemons = 0;
}

Game::Game(Trainer t)
{
    _player = t;
    _current_num_pokemons = 0;
}

// battle between pokemons chosen by the two Trainers
// _player is the main character and t is the opponent
// Pokemon pikachu("pikachu", 35, 55, 30, 90, 50);
// Pokemon charizard("charizard", 35, 55, 30, 90, 50);


// (attack / defense) * speed * rand = value
// p1 value > p2 value -> p1 HP gets a deduction
void Game::battle(Trainer t)
{
    /**
     * 1. Allow trainers to pick their pokemon for _ player and opponent
     *          1. display their pokemons
     *          2. choose their pokemons
     * 2. compute value for the selected pokemons
     *          p1.computeAttackValue(); p2.computeAttackValue();
     * 3. compare values
     *          1. update HP for the losing pokemon
     *                  1. 0 or a deduction -> deduction
     * 4. if HP is 0 -> print pokemon knocked out
     * _player.setPokemonAt(p1); t.setPokemonAt(p1);
     * 5. print the winner
    */

   // p1 and p2 -> getters
}