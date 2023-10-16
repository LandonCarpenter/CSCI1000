#include <iostream>

using namespace std;

int main()

{
    int iron_r, iron_coins, bronze_r, bronze_coins, silver_coins, silver_r, gold_coins;
    
    cout << "Enter the number of iron coins: " << endl;
    cin >> iron_coins;
    

    bronze_coins = iron_coins/3;
    iron_r = iron_coins % 3;

    silver_coins = bronze_coins/13;
    bronze_r = bronze_coins % 13;

    gold_coins = silver_coins/23;
    silver_r = silver_coins % 23;

    
     cout << gold_coins << " gold coin(s) " << silver_r << " silver coin(s) " 
    << bronze_r << " bronze coin(s) " << iron_r << "iron coin(s) ";
    
    return 0;
}