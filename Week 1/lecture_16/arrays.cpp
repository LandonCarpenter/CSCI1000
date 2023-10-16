#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;



int main()
{
    // int x; // declared a variable
    // x = 1; // initialize variable

    // int y = 0; // declare + initialize

    // declaring an int array of size 5
    // data_type variable_name[];
    // size should always be a positive INT
    int arr[5]; // -> can store 5 integers

    // cout << arr[0] << endl;

    // individual element initialization
    arr[0] = 10; // first element
    arr[1] = -3;

    // initialize all elements in the array to 0
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
        
    }

    // only works at the time of declaration
    // int arr1[10] = {}; // initialize all elements to 0

        int arr2[10] = {100, -3, 4};

    // double arr3[3];
    // bool checks[2] = {true, false};


    
    string names[2] = {"Jake", "From Statefarm"};
    cout << names[0][0] << endl;
    
    
    
    // string s = "csci";
    // cout << s[3];

    // access it with the square bracket (index)


    // strings are an array of characters




    // segmentation fault -> loops and arrays
    // error -> access something that you are not allowed to
    // out of bounds error
    // runtime error
    for (int i = 0; i < 4; i++) // ideally it should tell you that you are out of bounds
    {
        cout << arr2[i] << endl;
    }
    

    return 0;
}