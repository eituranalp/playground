#include <iostream>
#include "Car.h"
using namespace std;
//two different ways to find largest number among three numbers 


int main(){

    Vehicle myVehicle("Toyota","Supra",1993);
    Vehicle* v1=new Vehicle("Mazda","RX-7",1997);
    myVehicle.displayInfo();
    v1->displayInfo();
    Car myCar("Nissan","Skyline",1999,2);
    Vehicle* v2=new Car("Honda","NSX",2002,2);
    
    myCar.displayInfo();
    v2->displayInfo();
    return 0;
}