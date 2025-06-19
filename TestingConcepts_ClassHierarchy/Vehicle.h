#include <iostream>
#include <string>
using namespace std;

// Base class representing a generic vehicle with make, model, and year
class Vehicle{
protected:
    int year;
    string make;
    string model;
    string color;
public:
    Vehicle(string ma, string mo, int ye);
    virtual void displayInfo();

};