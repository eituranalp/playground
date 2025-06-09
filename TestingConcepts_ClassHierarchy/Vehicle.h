#include <iostream>
#include <string>
using namespace std;

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