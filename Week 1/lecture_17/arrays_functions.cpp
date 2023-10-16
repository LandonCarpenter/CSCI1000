#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip>
using namespace std;

// a function with an array intput will always have 2 parameters
void printArray (int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void printArray (double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

// functions can have the same name if the parameters have different data types or if the number of parameters are different

void convertToPounds(double kg[], double pounds[], int size)
{
    for (int j = 0; j < size; j++)
    {
        pounds[j] = kg[j] * 2.205;
    }
    size = 10;
}

int main()
{

    // int arr1[3] = {2, 3, 4};
    // int arr2[10] = {2, 4};

    // double arr3[4] = {3.4, 2.3};

    // printArray(arr1, 3);
    // printArray(arr2, 10);
    // printArray(arr3, 4);



    const int SIZE = 3;
    double kg[SIZE] = {2.3, 4.5, 7};
    double pounds[SIZE] = {};

    convertToPounds(kg, pounds, SIZE);
    printArray(pounds, SIZE);

    return 0;
}

// functions can have the same name if the parameters have different data types or if the number of parameters are different
// function overloading -> is good
// a function can never return return an array