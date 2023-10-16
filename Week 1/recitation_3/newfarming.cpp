#include <iostream>
#include<cmath>
using namespace std;

double fertilize(double stock, double amount);
double restock(double stock, double amount);

int main() 

{
   
    double result = fertilize(100,10);
    cout << result << endl;
    return 0;
}







double fertilize(double stock, double amount)
{
     double remaining = (stock - amount);
    if (amount < 0 || remaining < 0 )
    {
        return stock;
    }
       
        return remaining;  
    
    
}

double restock(double stock, double amount)
{
    double remaining = (stock - amount);
    if (amount < 0 || remaining < 0)
    {
        return stock;
    }

        return remaining;
    
}