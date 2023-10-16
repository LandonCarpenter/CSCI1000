#include <iostream>
#include<iomanip> // input output manipulator
using namespace std;

// program to format output

int main() 

{
    double score = 23;
    cout << fixed << setprecision(2); // in its own cout statement -- has to be the first cout statement
    cout << score << endl;
    


    return 0;
}