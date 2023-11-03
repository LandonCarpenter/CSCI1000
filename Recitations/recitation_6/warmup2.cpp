#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> animals = {"apple","cat", "banana",  "dog", "elephant", "fox"};
    int len = animals.size();

    cout << "Strings with size 3:" << endl;
    for (int i = 0; i < len; i++) {
        if (animals[i].size() == 3)   //Fill in the blank with appropriate condition.
        {
            cout << animals[i] << endl;
        }
    }

    return 0;
}
