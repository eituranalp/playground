#include "Vehicle.h"
class Car: public Vehicle{
    int numDoors;
    public:
    Car(string ma, string mo, int ye, int doors);
    void displayInfo() override;
};