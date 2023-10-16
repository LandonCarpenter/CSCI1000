#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;

// loop control -> break and continue

int main()
{
    for (int i = 0; i < 7; i++)
    {
        if (i == 3)
        {
            break; // terminate the loop
        }
        cout << i << endl;
    }

    for (int i = 0; i < 7; i++)
    {
        if (i == 3)
        {
            continue;// terminate the current iteration of the loop
            // going to skip the remaining code in the loop, back to the loop statement
        }
        cout << i << endl;
    }
    


    return 0;
}