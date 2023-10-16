#include <iostream>
using namespace std;

// function to find the index of element that it is looking for

int arrSearch(int arr[], int curr_size, const int MAX_SIZE, int element)
{
    bool flag = false;
        int position = -1; // if it returns -1 then we havent found the element
    for (int i = 0; i < curr_size && !flag; i++)
    {
        if (arr[i] == element)
        {
            position = i;
            flag = true;
            
        }
        
    }
    return position;
}


// remove an element -> modifying the array and the array size
// return the updated size

int removeElementInArr(int arr[], int curr_size, const int MAX_SIZE, int element)
{
    // 1. find the index of the element that should be removed
    int position = arrSearch(arr, curr_size, MAX_SIZE, element);

    // 2. check if position is within the valid range of  index values
    // if(position == -1)
    //      cout not found
    // else {loop}
    if (position >=0 && position < curr_size)
    {
        for (int i = position; i < curr_size - 1; i++) // position = 3; curr_size = 7;
        {
            arr[i] = arr[i + 1];
        }
        curr_size = curr_size - 1;
    }
    return curr_size;
}

int main()
{
    const int MAX_SIZE = 10;
    int arr[] = {12, 2, 9, 13, 26, 10, 31};
    int curr_size = 7;

    // int index = arrSearch(arr, curr_size, MAX_SIZE, 13);
    // cout << index << endl;

    curr_size = removeElementInArr(arr, curr_size, MAX_SIZE, 13);
    for (int i = 0; i < curr_size; i++)
    {
        cout << arr[i] << endl;
    }
    

    return 0;
}