#include <iostream>
#include <cassert>
using namespace std;

// area = PI * r * r
// create your function above main // defining it

/*return type(data type) functionName(function/formal parameters) --> function declaration
{
    code/funciton implementation
}

outputs funcitonName(inputs)

Write our own function to compute area of circle
*/

double area = 0; // GLOBAL VARIABLE/scope --> DANGEROUS

/**
 * @brief computing the area of the circle
 * 
 * @param radius radius of circle
 * @return double -> area of the circle
 * optional pseudocode
 * 
*/
double areaOfCircle(double radius)
{
    const double PI = 3.1415926535897932384626;
    double area = PI * abs(radius) * abs(radius);
    // giving the output
    return area;
}



// scope -> area within which you can access something (variable)


int main() 

{
    radius = 10;// can only be accessed inside areaOfCircle
    double r = 0;// 

    // cout << "Enter radius:" << endl;
    // cin >> r;
    

    cout << "Area: " << areaOfCircle(8) << endl;
    assert(areaOfCircle(8) == 200.96);
    
    
    // you cannot call a void function inside cout

    double answer = areaOfCircle(10); // ideal way to call a function that is returning something
    assert(areaOfCircle(10) == 314);
    assert(areaOfCircle(0) == 0);
    assert(areaOfCircle(-8) == 200.96);

    cout << "Area: " << area << endl; // test case 2

    return 0;
}