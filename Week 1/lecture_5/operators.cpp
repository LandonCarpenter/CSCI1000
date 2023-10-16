#include <iostream>

using namespace std;

int main() 

{
    // logical/boolean operators

    // &&, ||, !

    // (10 > 0) && (11 > 0) = true && true = true
    // 10 > 0 && 11 < 0 = true && false = false

    // OR - ||
    // 10 > 0 || 11 > 0 = 1 || 1 = 1
    // 10 > 0 || 11 < 0 = 1 || 0 = 1

    // ! - NOT
    // !(10 > 0) = !(1) = 0

    // 1, 2, 3... -> 1 digit numbers
    // 10, 11, 12... -> 2 digit numbers

    int number = 0;

    cout << "Enter a positive number:";
    cin >> number;

    // number < 10

    if (number <= 0)
    {
        cout << "Error! You may only enter positive numbers, try again: ";
    }
    

    if(number < 10 && number > 100){
        cout << number << " is a 1 digit number" << endl;
    }

    if (number >= 10 && number < 100)
    {
        cout << number << " is a 2 digit number" << endl;
    }
    
    if (number >= 100 && number < 1000)
    {
        cout << number << " is a 3 digit number" << endl;
    }
    

    return 0;
}

