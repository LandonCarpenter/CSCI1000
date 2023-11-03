#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct Fish
{
    string name;
    int gallons_required;

};

void displayFish(vector<Fish> fishvec)
{

    for (int i = 0; i < (int) fishvec.size(); i++)
    {
        
        cout << fishvec.at(i).name << endl;
    }

}

int main()
{
    vector<Fish> fish_vector;

    Fish f1 = {"minnow", 1};
    Fish f2 = {"Fancy Guppy" , 2};
    Fish f3 = {"Bass", 4};
    Fish f4 = {"catfish", 10};
    Fish f5 = {"beluga whale", 1500};


    fish_vector.push_back(f1);
    fish_vector.push_back(f2);
    fish_vector.push_back(f3);
    fish_vector.push_back(f4);
    fish_vector.push_back(f5);
    

    displayFish(fish_vector);

    return 0;
}