#include <iostream>
using namespace std;

int isValid(int input)
{
    if (input <= 0)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}


int main() 

{
    int number = 0;
    cout << "Enter a number: " << endl;
    cin >> number;

   int valid = isValid(number);
   if (valid == -1)
   {
        // code for invalid input
   }
   else if ()
   {
    
   }
   else
   {
        // more code
   }
   
   

    return 0;
}