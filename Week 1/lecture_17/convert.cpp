#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;

void demo(int x)
{
    int y = x * 2;
    x++;
    cout << y;
}

// program to convert user input(kg) into pounds

int main()
{
    const int SIZE = 3;
    double kg[SIZE] = {};
    double pounds[SIZE] = {};

    // user input
    int i = 0;
    do
    {
        cout << "Enter number: " << endl;
        cin >> kg[i];
        i++;
    } while (i < SIZE);

    // populate the pounds array
    // 1 kg = 2.205 pounds
    for (int j = 0; j < SIZE; j++)
    {
        pounds[j] = kg[j] * 2.205;
    }
    
    for (int j = 0; j < SIZE; j++)
    {
        cout << pounds[j] << endl;
    }
    
    


    return 0;
}