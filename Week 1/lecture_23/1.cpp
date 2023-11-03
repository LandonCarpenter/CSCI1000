#include<iostream>
#include<fstream>
#include<iomanip>
#include <sstream>

using namespace std;




int main()
{
    // 1. 
    ifstream fin;

    // other variables for data processing
    string month;
    double sales = 0;
    double total = 0;

    // 2. 
    fin.open("sales2.txt");

    // 3. 
    if (fin.fail())
    {
        cout << "File does not exist. Terminating program." << endl;
        return 1;
    }

    // 4. optional -> depends on the file
    // ignore the header
    string temp;
    getline(fin, temp); // use getline to read string of data separated by spaces from file

    // 5. process the data from the file
    // just print it
    // extract one line of data into a string
    // search for a comma and split stuff into 2 pieces
    string line;
    while (getline(fin, line)) // !fin.eof()
    {
        stringstream ss(line); // storing the content of line into ss
        // line/ss = "January,32"
        
        // getline - splits info
        getline(ss, month, ',');
        // month = "Janurary"
        // ss = "32"
        getline(ss, temp);
        sales = stod(temp);

    }

    cout << total << endl;

    // 6. close it
    fin.close();
    
    return 0;
}