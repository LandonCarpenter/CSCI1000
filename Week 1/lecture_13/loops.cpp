#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;

// program to print the first 50 numbers

// program to print the odd numbers 1-10
void printOdds()
{
    int i = 1;
    while (i <= 10)
    {
        cout << "iteration: " << i << endl;
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
        i++;
    }
    
}



int main() 
{
    // 1. define and initialize the loop variable -> i, j, k
    // 2. condition -> executes and also terminates
    // 3. updating the loop variable to terminate your loop


    // int i = 1; // loop variable
    // while (i <= 50)
    // {
    //     cout << "i:" << i << endl;
    //     i++; // i = i + 1; i += 1;
    // }
    printOdds();

    return 0;
}