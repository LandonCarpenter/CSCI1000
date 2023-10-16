#include <iostream>
#include <cmath>
using namespace std;



int main() 
{
    string name;
    cout << "Enter name: " << endl;
    cin >> name;
    cout << name << endl;

    cin.ignore(100, '\n');

    cout << "Enter name: " ;
    getline(cin, name);

    return 0;
}