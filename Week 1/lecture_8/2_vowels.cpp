#include <iostream>

using namespace std;

// program to check if the user input is a vowel or consonant

bool isVowel(char letter)
{
     if ( letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' 
    || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        // DO NOT print and return in the same function
        return true;
    }
    
    else 
    {
        return false;
    }
}


int main() 

{
    char letter;

    cout << "Enter a letter: ";
    cin >> letter;

    /**
     * call the isVowel function
     * check if function returns true the print it is vowel
     * check if function returns false then print it is not a vowel
    */
   
   bool check = isVowel(letter);
   if (check) // same as writing -> check == true
   {
        cout << "It is a vowel." << endl;
        // more computations
   }
   else
   {
        cout << "It not is a vowel." << endl;
   }
   

    return 0;
}