#include<iostream>
#include<fstream> // filestreams

using namespace std;

int main()
{
    // int x, y, z;
    // cin >> x >> y >> z;
    // >> processing the input
    // cin - istream variable/object
    // learn how to read and write to an external file
    int x;
    int total = 0;
    string filename = "data.txt";
    // 1. create a filestream variable/object to read from a file
    // fin, file_in, in_file
    ifstream file_in; // can only read from a file
    ofstream fout; // can only write to a file

    // common error: fstream file_in;

    // 2. associate a file to the filestream object so that we can read from it
    // open() - string argument
    file_in.open(filename);
    // combine steps 1 and 2 - ifstream file_in1 ("data.txt");
    fout.open("output.txt", ios::app);

    // 3. check if that file exists or if we can open that file
    // fail() - returns true if we cannot open the file and false otherwise
    // is_open() - returns true if we can open the file and false otherwise

    if (file_in.fail())
    {
        cout << "invalid file name" << endl;
        return 1; // 1 because something went wrong
    }
    
    // 4. process a header if there is one
    string header;
    file_in >> header; // storing the first line so that our loop works correctly
    cout << file_in.tellg() << endl;

    // 5. read from the file and print it


   while(!file_in.eof()) // loop as long as we haven't reached the end of the file
   {
        file_in >> x; // read one data point and store it in variable x  
        cout << file_in.tellg() << endl;  
        // cout << x << endl; // printing what we just stored in x
        total += x;

   }

   fout << "total - " << total << endl;

    // 6. close the file
    file_in.close();

    return 0;
}