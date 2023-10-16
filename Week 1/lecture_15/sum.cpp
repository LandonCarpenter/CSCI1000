#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;

// program to compute sum of numbers(given by user)
// type 0 to stop entering input

int main()
{
    int num = 0;
    int sum = 0;

    cout << "Enter number: " << endl;
    cin >> num;
    
    while (num != 0)
    {
        sum+=num; // sum = sum + num
        
        cout << "Enter number: " << endl;
        cin >> num;
    }
    cout << "sum: " << sum << endl;

    // do loop
    // do while loop -> scenario with your loop executing at least once
    


    return 0;
}