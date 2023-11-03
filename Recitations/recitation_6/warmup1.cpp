#include <iostream>

using namespace std;

int main() 
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    int rows = 3;
    int cols = 3;

    cout << "Left Diagonal elements are: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0 ; j < cols; j++)  // Fill in the blank with for loop  
        {
            if (i == j) 
            {
                cout << matrix[i][j] << " ";
            }
        }
    }

    cout << endl;

    return 0;
}
