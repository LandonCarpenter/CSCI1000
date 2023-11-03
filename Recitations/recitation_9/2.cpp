#include <iostream>

using namespace std;

struct Person
{
    string name;
    int age;
    string occupation;
};

int main()
{
    // Create two instances of Person;
    Person person_one = {"Anna", 20, "Software Engineer"};
    Person person_two = {"Ricardo", 22, "Software Engineer"};

    // compares the two Person's occupation

    if(person_one.occupation == person_two.occupation)
    {
        cout << person_one.name << " and " << person_two.name << " have the same occupation: " << person_two.occupation << endl;
    }
}
