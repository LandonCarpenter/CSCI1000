#include<iostream>

using namespace std;

int main()

{
    // + _ * /
   // int x = 10, y= 4;
   // int sum = 0;
    //sum = x+y;
    //cout << "Sum = " << sum << endl;


    //double div = (double) x/y; // integer division
    //cout << "Division = " << div << endl; 


    
    
    double width = 0, height = 0, perimeter = 0;

    cout << "Enter width of rectangle: ";
    cin >> width;

    cout << "Enter height of rectangle: ";
    cin >> height;

    perimeter = 2 * ( width + height ) ;
    cout << "Perimeter =" << perimeter << endl;



    return 0;
}