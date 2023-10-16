#include <iostream>
using namespace std;

// program to print a menu

int main() 

{
    char choice;

    cout << "----------------Target Menu----------------" << endl;
    cout << "a. School Supplies" << endl; // books, pencils, backpack
    cout << "b. Clothing" << endl;
    cout << "c. Electronics" << endl;
    cout << "d. Exit" << endl;

    cout << "Choose a category:";
    cin >> choice;
    
    if (choice == 'a')
    {
        char supplies_choice;

        cout << "you chose school supplies" << endl;
        
        cout << "----------------School Supplies Menu----------------" << endl;
        cout << "a. Books" << endl; // books, pencils, backpack
        cout << "b. Pencils" << endl;
        cout << "c. Backpack" << endl;
        cout << "d. Exit" << endl;

        cout << "Choose school supplies: " << endl;
        cin >> supplies_choice;

        if (supplies_choice == 'a')
        {
            cout << "you chose books" <<endl;
        }
        else if (supplies_choice == 'b')
        {
            cout << "you chose pencils" <<endl;
        }
        else if (supplies_choice == 'c')
        {
            cout << "you chose backpack" <<endl;
        }
        else {
            cout << "Goodbye!" << endl;
        }
        
    }
    else if(choice == 'b')
    {
        cout << "you chose clothing" << endl;
    }
     else if(choice == 'c')
    {
        cout << "you chose electronics" << endl;
    }
    else if(choice == 'd')
    {
        cout << "Goodbye!" << endl;
    }
     else // any other case that is not a, b, c, or d
    {
        cout << "Read the menu again. Invalid option chosen." << endl;
    }
    


    switch() - memory_order_consume-> 
   
    



    return 0;
}