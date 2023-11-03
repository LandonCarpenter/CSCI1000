#include <iostream>

using namespace std;

// Define the struct for Person.
struct Person
{
    string name;
    int age;
    string occupation;
};

int main()
{
    // Create an instance of Person,
    Person person;

    // Assign values to person's attributes; see expected output below
    person.name = "Billy";
    person.age = 22;
    person.occupation = "Construction Worker";

    // Print out the person's information
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Occupation: " << person.occupation << endl;

    return 0;
}