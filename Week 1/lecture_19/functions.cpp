#include <iostream>
#include<vector>
using namespace std;

int demo(int x, char c)
{
    x = 100;
    // pass by value
    c = 'x';
    return x;
}

void add10(int arr[], int size) // arrays are passed by reference -> global scope
{
    for (int i = 0; i < size; i++)
    {
        arr[i] += 10;
    }
    
}

vector<int> add10(vector<int> vec)
{
    for (int i = 0; i < (int) vec.size(); i++)
    {
        vec.at(i) += 10;
    }
    return vec;
}

int main()
{
    int x = 10;
    char q = 'W';
    x = demo(x, q);
    cout << x << q << endl; // 10, W

    int arr[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++)
{
    cout << arr[i] << endl; // 1,2,3,4,5
}
    add10(arr, 5);
cout << "after function call" << endl;
for (int i = 0; i < 5; i++)
{
    cout << arr[i] << endl; // 
}


vector<int> vec1 = {1, 2};
vector<int> vec2;
for (int i = 0; i < (int) vec1.size(); i++)
{
    cout << vec1.at(i) << endl;
}

vec2 = add10(vec1); // vectors are pass by value
cout << "after function call" << endl;

for (int i = 0; i < (int) vec2.size(); i++)
{
    cout << vec2.at(i) << endl;
}


    return 0;
}