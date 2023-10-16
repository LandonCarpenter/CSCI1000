#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;

int expenseTracker();

int main()
{

    int total = expenseTracker();
    cout << "Total expenses for the day: $" << total << endl;

    return 0;
}

int expenseTracker()
{
    int groceries, entertainment, education, g_amount, et_amount, edu_amount, total_expenses = 0;
    string choice;

    cout << "Enter a category (groceries, entertainment, education, or 'exit'): " << endl;
    cin >> choice;

    while (choice != "exit")
    {
        if (choice == "groceries")
        {
            cout << "Enter the expense amount: " << endl;
            cin >> g_amount;
            groceries = groceries + g_amount;
        }
        else if (choice == "entertainment")
        {
            cout << "Enter the expense amount: " << endl;
            cin >> et_amount;
            entertainment = entertainment + et_amount;
        }
        else if (choice == "education")
        {
            cout << "Enter the expense amount: " << endl;
            cin >> edu_amount;
            education = education + edu_amount;
        }
        else
        {
            cout << "Invalid category. Please enter a valid category" << endl;
        }
        cout << "Enter a category (groceries, entertainment, education, or 'exit'): " << endl;
        cin >> choice;
    }
    
    if (choice == "exit")
    {
        cout << "Category-wise Expenses: " << endl;
        cout << "Groceries: $" << groceries << endl;
        cout << "Entertainment: $" << entertainment << endl;
        cout << "Education: $" << education << endl;

        total_expenses = groceries + entertainment + education;

    }
    return total_expenses;
}