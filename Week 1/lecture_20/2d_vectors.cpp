#include <iostream>
#include<vector>
using namespace std;



int main()
{
    vector<int> vec {1, 2, 3};

    vector<vector<int>> vec2 = {{1, 2, 3}, // row 1 has size 3
                                {1}, //  size 1
                                {1, 2, 3, 4, 5, 6}, // size 6
                                vec // row 4 has size 3 - {1, 2, 3}
    };
    vec.push_back(10);

    cout << vec2.size() << endl;  // number of rows

int rows = vec2.size();
    for (int i = 0; i < rows; i++)
    {
        int cols = vec2.at(i).size();
        for (int  j= 0; j < cols; j++)
        {
            cout << vec2.at(i).at(j) << "   "; // vec2[i][j]
        }
        // printing each row in a new line
        cout << endl;
    }
    

    return 0;
}