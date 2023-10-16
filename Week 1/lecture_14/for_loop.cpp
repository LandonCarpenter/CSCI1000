#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;

/**
 * for loop -> count controlled loop, three statements
 * for(;;)
 * for(loop variable initialization; condition; update)
 * {
 *      statement
 * }
 * 
 * loop initialization
 * while(condition)
 * {
 *      statement
 *      update loop variable
 * }
*/

// while loop -> versatile loop -> can be used for any problem
// do not use break or return in this loop -> uses your condition instead
// event controlled loop -> opudate is not just +1 or -1

// program to print numbers 1-10

int main()
{
    int i = 0;
    // while (i < 10)
    // {
    //     cout << i << endl;
    //     i++;
    // }
    
    for(int i = 0; i < 10; i++)
    {
        cout << i << endl;
        // update happens here
    }


    return 0;
}