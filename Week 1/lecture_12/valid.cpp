#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;



int main() 
{
    int number = 0;
    cout << "Enter number: " << endl;
    cin >> number;
    // loop -> repeatedly execute a statement(s)
    // while loop -> versatile loop -> any problem

    // while (/*condition*/) // code block executes as long as the condition is true
    // {
    //     /* code */
    //     // many times depending on the condition
    // }
    

    while (number <= 0)
    {
        cout << "Please enter valid input." << endl;
        //prompt for input again
        cout << "Enter number: " << endl;
        cin >> number;

    }

    if (number > 0)
    {
        // computes something
        cout << "valid input" << endl;
    }
    
    

    return 0;
}