#include<iostream>
#include<fstream>
#include<iomanip>

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
        int len = line.length();
        // check if the line has data to read
        if (len > 1 && !isspace(line.at(0)))
        {
            for (int i = 0; i < len; i++)
            {
                if (line.at(i) == ',')
                {
                    // extract everything until before the comma
                    // extract everything after the comma
                    month = line.substr(0,i);
                    sales = stod(line.substr(i+1)); // extracts everything from i+1 until the end of the line
                    total += sales;
                    // stoi - "135667"
                    // stod - "124.24"

            }
            
        }
        cout << month << "          " << sales << endl;
        }
    }

    cout << total << endl;

    // 6. close it
    fin.close();
    
    return 0;
}