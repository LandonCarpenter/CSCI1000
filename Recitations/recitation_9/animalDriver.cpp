#include <iostream>
#include "animal.h"
using namespace std;

int main() {

    // creating an instance of Animal named dog using the default constructor
    Animal dog;

    cout << dog.getName() << endl;
    cout << dog.getAge() << endl;

    // create an instance of Animal named cat using the Parameterized constructor
    Animal cat("smashtown", 20);
    
    cout << cat.getName() << endl;
    cout << cat.getAge() << endl;  

}