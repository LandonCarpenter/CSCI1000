#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{

    ifstream infile("visitors.txt");
    string text;
    // int count = 1;
    int index = 0;
    int highest = 0;
    string busiest;
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int numvisitors[5];

    while (getline(infile, text))
    {
        int count = 1;
        for (int i = 0; i < (int) text.length(); i++)
        {
            if (text[i] == ',')
            {
                count += 1;
            }

        }
        numvisitors[index] = count;
        index += 1;

    }
    for (int i = 0; i < 5; i++)
    {
        if(numvisitors[i] > highest)
        {
            highest = numvisitors[i];
            busiest = days[i];
        }
    }
    cout << busiest << " is the busiest day at the Motel." << endl;

    return 0;
}