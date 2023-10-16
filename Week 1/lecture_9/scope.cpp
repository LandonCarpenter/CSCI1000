#include <iostream>
using namespace std;

// void display()
// {
//     int i = 10;
//     return 0;
// }

int main() 

{
    int number = 10;
    int x = 10;
    cout << "x value outside if: " << x << endl;
    if (number >= 0)
    {
        int x = 20; // declaring a variable
        cout << number;
        // scope of x here is only inside the if condition
        cout << "x value inside if: " << x << endl;
    }
    

    return 0;
}