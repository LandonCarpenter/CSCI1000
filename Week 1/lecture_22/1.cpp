#include<iostream>

using namespace std;

// (-fsanitize=address) flag to warn about segfaults



int main ()
{
    double x = 0;
    string month;
    // cin >> month;
    // cin >> x;
    while (cin >> month >> x)
    {
        cout << x << endl;
    }
    

    return 0;
}