#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;

// program to count character matches in a given string
// string s = "csci1300"
// there are two "c"s in this string


int main()
{
    //          01234567
    string s = "csci1300";
    int count = 0;
    // print i through the string s
    // [] is how you access individual letters in a string
    cout << s[3] << endl; // will print i

    // if accessed within a loop -> string_var[loop variable]

    // count number of c's inside string s

    // looping/ string traversal -> for loop
    // 0 - 7
    // length of s is 8

    int len = s.length(); // call it once and save it in a variable

    //       1    ;    2   ;  3
    for (int i = 0; i < len; i++) // i < 8
    {
        if (s[i] == 'c')
        {
            count++; // count = count+1 || count+=1
        }
        
    }
    // 1st iteration -> 1, 2, loop body, 3
    // 2nd iteration -> 2, loop body, 3
    // 3rd iteration -> 2, loop body, 3
    cout << "We found " << count << " c's" << endl;

    return 0;
}