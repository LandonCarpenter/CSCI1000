#include<iostream>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() 
{
    // Fill the line below to make an input file stream from the file name given above.
    ifstream infile("input.txt");
    string text;  
    while(getline(infile, text))
    {      
        cout << text << endl;
    }
    return 0;
}
