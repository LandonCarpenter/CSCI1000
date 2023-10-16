#include <iostream>
#include <cmath>
#include <cassert>
#include <iomanip> // setw() --> set width
using namespace std;

// 2d arrays must have column filled in for the parameter
void print2DArray(int arr[][4], int rows, int cols) // arr contains 30 rows and 10 columns
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(7) << arr[i][j];
        }
        cout << endl;
    }
    
}

int main()
{
    // const int SIZE = 3;
    // int arr_row1[SIZE] = {2, 3, 9}; // 1D array
    // int arr_row2[SIZE] = {2, 3, 9}; 

    // 2D array - multiple rows and columns
    //  data_type   arr_name[ROWS][COLUMNS]
    const int ROW = 3;
    const int COLUMN = 4;
    double sales[ROW][COLUMN]; // declared a 2D array

    for (int i = 0; i < ROW; i++) // outer loop is rows
    {
        for (int j = 0; j < COLUMN; j++) // inner loop is columns
        {
            cout << setw(15) << sales[i][j];
        }
        cout << endl;
    }

    // internally a 2D array is made up of multiple 1D arrays
    int arr2[ROW][COLUMN] = { {2, 3, 5, 6}, // row 0
                              {4, 6, 10, 2}, // row 1
                              {3, 2, 1, 8} }; // row 2

    // int arr3[ROW][COLUMN] = {{1, 2, 3, 4}, {}, {}};

    // int arr4[ROW][COLUMN] = { };
    
    print2DArray(arr2, ROW, COLUMN);

    int arr10[] = {2, 4, 5, 20}; // assigns a size of 4

    return 0;
}