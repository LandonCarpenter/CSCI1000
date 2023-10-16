#include <iostream>
using namespace std;



int main() 
{
    int number =0;
    cout << "enter number: " << endl;
    cin >> number;
    // check for cin state after every cin call

    // cin.fail() -> returns true if cin is in a failed state
    if (cin.fail() == true)
    {
        cout << "cin failed state" << endl;
    }
    // clear the buffer
    // reset the state of cin

    cin.clear(); // clears the fail state of cin
    // make sure that the cursor moves on ahead
    cin.ignore(100, '\n');
    // some arbitrary number - 10000
    // move on 100 spaces ahead and use the new line as the break point
    

    cout << number << endl;
    // FAILED STATE -> no longer accept any more input until we clear that state

    string name;
    cout << "enter name: " << endl;
    cin >> name;

    return 0;
}