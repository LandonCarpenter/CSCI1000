#include <iostream>

using namespace std;

// program to check if the user input is a vowel or consonant

int main() 

{
    char letter;

    cout << "Enter a letter: ";
    cin >> letter;

    // a, e, i, o, u
    // letter == 'a'

    if ( letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' 
    || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        cout << letter << " is a vowel." << endl;
    }
    
    else 
    {
        cout << letter << " is not a vowel." << endl;
    }

    return 0;
}