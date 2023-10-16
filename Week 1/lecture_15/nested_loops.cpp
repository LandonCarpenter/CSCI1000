#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;

// patterns
// # * * * * 
// * # * * * 
// * * # * * 
// * * * # * 
// * * * * # 

int main()
{
    // cout << "* * * * *" << endl;
    // outer loop -> i
    for (int i = 0; i < 5; i++)
    {
        // inner loop -> j
        for (int j = 0; j < 5; j++) // count the number of columns
        {
            if (i == j)
            {
                cout << "# ";
            }
            else
            {
                cout << "* ";
            }
            
        }
        cout << endl;
    }
    


    return 0;
}