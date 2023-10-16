#include <iostream>
#include<cmath>
using namespace std;

double fertilize(double stock, double amount);
double restock(double stock, double amount);

int main() 

{
    double stock = 0;
    double amount = 0;
    int decision = 0;
    cout << "Press 1 for restock or 2 for Fertilize" << endl;
    cin >> decision;

    if (decision == 1)
    {
        double remaining = fertilize(stock, amount);
        cout << remaining;
        return remaining;
    }

    else if(decision == 2)
    {
       double remaining = restock(stock, amount);
        cout << remaining;
        return remaining;
    }

    else
    {
        cout << "Please enter either a 1 or a 2" << endl;
        return 0;
    }
    

    return 0;
}

double fertilize(double stock, double amount)
{
    if (amount < 0)
    {
        cout << stock << endl; 
        return 0;
    }

    else
    {
        cout << "Enter your current stock, and amount: " << endl;
        cin >> stock >> amount;
        double remaining = (stock - amount);
        return remaining;  
    }
    
}

double restock(double stock, double amount)
{
    if (amount < 0)
    {
        cout << stock << endl;
        return 0;
    }

    else
    {
        cout << "Enter your current stock, and amount: " << endl;
        cin >> stock >> amount;
        double remaining = (stock + amount);
        return remaining;
    }
    
}