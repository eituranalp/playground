#include "Car.h"
Car::Car(string ma, string mo, int ye, int doors):Vehicle(ma,mo,ye),numDoors(doors){}
void Car::displayInfo(){
    cout<<"\nCar brand: "<<make<<", Year: "<<year<<", Doors: "<<numDoors;
}