#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;

void swap(char letters[10], int first_element, int last_element)
{
    int temp = letters[first_element];
    letters[first_element] = letters[last_element];
    letters[last_element] = temp;
    
    return;
}

void reverseArray(char letters[], int letters_length)
{
    letters_length = 10;
    int left = 0;
    int right = letters_length -1;
    while (left < right)
    {
        swap(letters, left, right);
        left++;
        right--;
    }
    
}


int main()
{

    char letters[10];
    cout << "Please enter ten characters for the array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> letters[i];
    }
     
     reverseArray(letters, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << letters[i];
    }
    //cout << "The reversed array is: " << reverseArray(letters, 10);
    
   
    return 0;
}