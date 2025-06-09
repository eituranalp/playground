#include "Vehicle.h"

Vehicle::Vehicle(string ma, string mo, int ye):make(ma),model(mo),year(ye){}
void Vehicle::displayInfo(){
    cout<<"\nVehicle brand: "<<make<<", Year: "<<year;
}