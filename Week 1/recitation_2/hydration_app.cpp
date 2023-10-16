#include <iostream>
using namespace std;

int main() 

{
    double floz = 0;
    double remainingfloz = 0;
    
    cout << "How many fl oz of water have you drank today?" << endl;
    cin >> floz;

    remainingfloz = 64 - floz;

    if (floz >= 64)
    {
        cout << "You've hit your goal for the day! Great job getting hydrated!" << endl;
    }
    
    else if (floz < 64 && floz > 32 )
    {
        cout << "You're doing great, but you're still halfway to your goal! Get that water in! You have " << remainingfloz << " fl oz left to drink" << endl;
    }
    else if (floz <= 32 && floz > 0)
    {
        cout << "You're very, very dehydrated! Get that water in! You have " << remainingfloz << " fl oz left to drink." << endl;
    }
    else{
        cout << "Please enter a valid, non-negative number." << endl;
    }
    

    return 0;
}