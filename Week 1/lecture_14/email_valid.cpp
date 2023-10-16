#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;

// string traversal --> counting --> for loop

// email ID ---> csci1300@
// accept user input for email_id(string)
// loop through all the letters in the email
//      check if letter is equal to @ value
//          print valid email
//      if @ is not present in email id
//          print invalid email

int main()
{
    string email_id;
    cout << "Enter email: ";
    getline(cin, email_id);
    //csci1300 -->

    // flag variable -> status/boolean check
    // flag, valid, check, done

    bool flag = false;

    for (int i = 0; i < (int) email_id.length(); i++)
    {
        cout << email_id[i] << endl;
        if (email_id[i] == '@')
        {
            // cout << "Valid email!" << endl;
            flag = true;
            break;
        }
        cout << i << endl;
    }
        if (flag == true)
        {
            cout << "valid email" << endl;
        }
        
        else
        {
            cout << "Invalid Input" << endl;
        }
        
    
    

    return 0;
}