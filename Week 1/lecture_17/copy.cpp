#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;



int main()
{
    // int x = 10;
    // int y ;
    // y = x;

    int arr1[3] = {1, 2, 3};
    int arr2[3];

    // arr2 = arr1; // many elements -- will not work

    // arr2[0] = arr1[0];
    cout << "before copy" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arr2[i];
    }
    
    for (int i = 0; i < 3; i++)
    {
        arr2[i] = arr1[i];
    }

    cout << "after copy" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arr2[i];
    }
    


    return 0;
}