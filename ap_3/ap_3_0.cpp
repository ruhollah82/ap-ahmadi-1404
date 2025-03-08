#include <iostream>
using namespace std;

class vehicle
{
    int numberOfWheels;
    string color;
    string company;
    string model;

public:
    vehicle(int numofw, string col, string com, string mod)
    {
        numberOfWheels = numofw;
        color = col;
        company = com;
        model = mod;
    }
};

class bike : public vehicle
{
private:
    int dande;

public:
    bike(int dande) : vehicle(2, "black", "damavand", "12b43")
    {
        this->dande = dande;
    }
};
