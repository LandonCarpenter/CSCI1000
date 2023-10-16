#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;

// adding or subtracting a value of 1 is very commonly used in loops

int main() 
{
    //section 2.2.2
    // pre/post increment

    int num1 = 10;
    // num1 = num1 + 1;
    // num1 += 1; // does same thing as line 15
    // num1 *= 2;

    // num1++// same as line 15

    // int x = num1 * 2; // 20
    // post increment happens after the other computation
    int result = num1++ * 2; // 22
    // 1. num1 * 2 -> 20
    // 2. num1  = num1 + 1 -> 11
    // 3. result = 20
    cout << "num1: " << num1 << endl;
    cout << "result: " << result << endl;

    // pre increment
    int result_2 = ++num1 * 2;

    cout << "num1: " << num1 << endl;
    cout << "result: " << result_2 << endl;


    // pre/post decrement

    return 0;
}