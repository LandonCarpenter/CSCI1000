#include<iostream>
#include<vector>

using namespace std;


void acceptInputValues(vector<int>& vec)
{
    vector<int> vec(15);
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
        vec.push_back(vec[i]);
    }
    
    return;
}

double calculateAverage(vector<int>& vec)
{
    double total = 0;
    double average = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        total = total + vec[i];
    }
    average = total/15;
    return average;
}

void removeBelowAverage(vector<int>& vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
    if (vec[i] < calculateAverage(vec))
        {
            vec.push_back(i);

    
        }
        
    }
    
    
    
    return;
}

int main()
{


    return 0;
}