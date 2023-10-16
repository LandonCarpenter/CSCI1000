#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;

// program to check if login ID is valid
// accept login ID
// user gets 3 attempts
// loop as long as they have an attempt remaining
//      check if login ID matches ID in our records
//          print successful
//      if login doesn't match
//          print try again, attempts remaining
//          remove an attempt
//          provide textbox for login ID
// exit program

int main() 
{

    string login_name;
    int attempts = 0; // assume they have 3 attempts
    string actual_login = "patrick_2023";

    // prompt for user input

    cout << "enter login ID" << endl;
    getline(cin, login_name);

    
    while (attempts < 3)
    {
        if (login_name == actual_login)
        {
            cout << "successful" << endl;
            // loop has to terminate at every branch
            attempts = 3; // use the condition that makes the loop run, edit it so it stops the loop
        }
        else
        {
            attempts++;
            cout << "Attempts remaining: " << 3 - attempts << endl;
            cout << "Doesn't match our records. Try again. Login ID: " << endl;
            getline(cin, login_name);
        }
        
    }
    

    return 0;
}