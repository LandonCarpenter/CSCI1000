#include <iostream>
// assert statement -> macro defined in the cassert library
#include<cassert> // assert.h

using namespace std;


int isValid(int number)
{
    if (number <= 0)
    {
        return -2; // making up our own
    }
    
    else
    {
        return 2;
    }
}

// write the assertions in its own function
void testIsValid()
{
    // test case 1 -- valid input of 3 (>0)
    assert(isValid(3) == 2);
    cout << "test case 1: passed" << endl;

    // test case 2 -- valid input of-3 (<0)
    assert(isValid(-3) == -2);
    cout << "test case 2: passed" << endl;
    
    // test case 3 -- valid input of 1000000 (>0)
    assert(isValid(1000000) == 2);
    cout << "test case 3: passed" << endl;

    // test case 4 -- valid input of 0 (=0)
    assert(isValid(0) == -2);
    cout << "test case 4: passed" << endl;
}

// checking if the function is working correctly before we integrate it into main() / user input

int main() 

{
    // int number = 0;
    // cout << "Enter a number: " << endl;
    // cin >> number;

    // assert(LHS == RHS); --> functions that have a non-void return type
    // LHS -> function call with the argument/inputs
    // RHS -> expected function output

    testIsValid();

    // black box testing -- assets and Coderunner will work
    // give input, check if the function output matches the expected output
    // we do not know how the function is implemented
    // function prototype + return value
    // int isValid(int) -> -2 and 2

    // white box testing -> we have knowledge about the implementation
    // global variables, data types match the values on the rhs
   
    return 0;
}