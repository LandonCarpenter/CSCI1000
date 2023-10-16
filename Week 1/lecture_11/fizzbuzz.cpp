#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

// 

// check if number is divisible by 3 and 5 then return fizzbuzz
// check if number is divisible by 3 then return fizz
// check if number is divisible by 5 then return buzz

// otherwise return the number

string fizzbuzz (int number)
{
    if (number % 3 == 0 && number % 5 == 0)
    {
        return "fizzbuzz";
    }
    else if (number % 5 == 0)
    {
        return "buzz";
    }
    else if (number % 3 == 0)
    {
        return "fizz";
    }
    else
    {
        return to_string(number);
        // to_string(int/double) -> numeric value to its equivalent string
    }
    
    
    
}




int main() 
{
    // T1 - 2
    assert(fizzbuzz(2) == "2");
    cout << "function passed for 2" << endl;

    // T2 - 3
    assert(fizzbuzz(3) == "fizz");
    cout << "function passed for 3" << endl;

    // T3 - 5
    assert(fizzbuzz(5) == "buzz");
    cout << "function passed for 5" << endl;

    // T4 - 15
    assert(fizzbuzz(15) == "fizzbuzz");
    cout << "function passed for 15" << endl;

    return 0;
}