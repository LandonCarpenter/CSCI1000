#include <iostream>
#include <vector>

using namespace std;

// Function to add multiples of 3 to a vector
void addMultiplesOf3(vector<int>& vec)  // Fill in the blank with appropriate function parameter
{ 
    for (int i = 1; i <= 5; i++) 
    {
        int multiple = 3 * i;
        vec.push_back(multiple);
    }
}

int main() 
{
    vector<int> myVector= {1, 2, 4, 5};

    // Call the function to add multiples of 3 to the vector
    addMultiplesOf3(myVector);
    int length = myVector.size();
    
    // Print the elements of the vector
    cout << "Updated vector: ";
    for (int i = 0; i <= length; i++) 
    {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}

