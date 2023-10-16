#include <iostream>
using namespace std;

// function to check if the input is an uppercase letter
bool isUpperCase(char letter)
{
    if (letter >= 65 && letter <= 90)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main() 


{
    char letter = 'K';

    bool check = isUpperCase (letter);
    cout << check << endl;

    return 0;
}