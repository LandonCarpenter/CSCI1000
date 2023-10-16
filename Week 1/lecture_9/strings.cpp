#include <iostream>
#include<string> // lots of built in functions
using namespace std;

int main() 

{

    // string name;
    // cout << "Enter name: ";
    // // getline() -> takes in two arguments -> cin, string_cariable
    // getline(cin, name); // -> new line /n
    // // do not use cin and getline in the same program
    // cout << name << endl;

    string first_name = "Spongebob";
    string last_name = "Squarepants";

    string full_name = first_name + " " + last_name;

    cout << full_name << endl;

    // length() -> returns the number of characters in the string/length of the string

    unsigned int len = full_name.length(); // no arguments

    cout << len << endl;


    // index value -> location of a  character in a string
    // []

    char letter = full_name[6]; 
    cout << letter << endl;

    // substr() -> hw 4 and project 1
    // extracts a portion of the given string

   // string_var1 = string_var.substr(starting_index, number_of_characters);

   string new_string = full_name.substr(10,6);
   cout << new_string << endl;

    return 0;
}