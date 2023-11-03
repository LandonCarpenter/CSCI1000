#ifndef AQUARIUM_H
#define AQUARIUM_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


struct Fish
{
    string name;
    int gallons_required;

};


class Aquarium
{
    // data member
    private:  
        string _aquarist_name;
        int _gallons_used;
        vector<Fish> _fish;


    public:
        Aquarium();
        Aquarium(string);

        string getName() const;
        int getGallons() const;
        vector<Fish> getFish() const;

        void setName(string);
        void setGallons(int);
        void setFish(vector<Fish>);
};
#endif