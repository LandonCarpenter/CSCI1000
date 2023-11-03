#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() 
{
    // Fill the line below to make an input file stream from the file input.txt.
    ifstream infile("input.txt");
    // Fill the line below to make an output file stream to the file output.txt.
    ofstream outfile("output.txt");
    string text;  
    while(getline(infile, text))
    {
        // Fill the line below to write the text to the output file stream.
        outfile << text << endl;
    }
    return 0;
}
