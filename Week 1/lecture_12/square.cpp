#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;

// common error 3.3

bool doublesEqual(double a, double b, const double epsilon = 1e-2) // 2 digits after the decimal point
{
    double c = a - b;
    return c < epsilon && -c < epsilon;

}

int main() 
{
    double var = sqrt(2);
    double result = var * var; // 2
    cout << fixed << setprecision(10) << result << endl;
    assert(doublesEqual(result, 2)); // pass
    // 2 = 2.00000000000000044409

    return 0;
}