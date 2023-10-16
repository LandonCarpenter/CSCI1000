#include <iostream>

using namespace std;


// program to check if the number is even or odd

int main() 

{
    int number = 0;

    cout << "Enter a number: ";
    cin >> number;

    if(number == 0){
        cout << " is zero.";
    }

    // check if number is even
    
    else if(number % 2 == 0){
       cout << number << " is even.";

    }
    
    // check if number is odd
    else{
        cout << number << " is odd.";

    }



    return 0;
}