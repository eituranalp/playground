#include <iostream>
#include <ios>          //needed to format
#include <iomanip>      //needed to format
//  https://en.cppreference.com/w/cpp/io/manip
using namespace std;
int main(){
    std::cout<<std::endl;   //endl

    //std::flush : flushes the output buffer to its final destination.
    std::cout<<"Hello"<<std::flush<<std::endl;

    //std::setw() : Adjusts the field with for the item about to be printed.
    //Justify : Values can be justified in their fields. There are three manipulators, left, right, internal
    std::cout<<"Formatted Text"<<std::endl;     //shows up in a field 10, 10, 5 characters wide
    std::cout<<std::left;                       //starts from the left/right side of the field      
    std::cout << std::setw(10) <<  "Lastname"  << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel"  << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10)  << "Woods" << std::setw(5) <<  "33" << std::endl;
    std::cout << std::setw(10) <<  "Jordan" << std::setw(10)  << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(10) <<  "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) <<"27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;

    //setfill
    std::cout<<std::setfill('-');               //sets the fill character to '-' to fill empty spaces
    std::cout << std::setw(10) << "Daniel"  << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10)  << "Woods" << std::setw(5) <<  "33" << std::endl<<std::endl;

    //boolalpha and noboolapha
    std::cout<<std::boolalpha;                  //display true-false instead of 1-0
    std::cout<<"with boolalpha: "<<true<<", "<<false<<std::endl;
    std::cout<<std::noboolalpha;                //display 1-0 instead of true-false
    std::cout<<"without boolalpha: "<<true<<", "<<false<<std::endl<<std::endl;

    //showpos and noshowpos
    std::cout<<std::showpos;                    //shows the + sign for positive numbers
    std::cout<<"positive number: "<< 16<<std::endl;
    std::cout<<"negative number: "<< -65<<std::endl<<std::endl;        
    std::cout<<std::noshowpos;                  //hides the + sign for positive numbers

    //different number systems : std::dec, std::hex, std::oct
    int pos_int {717171};                       
    int neg_int {-47347};
    double double_var {498.32};
    std::cout << std::endl;
    std::cout << "pos_int in different bases : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    std::cout << std::endl;
    std::cout << "neg_int in different bases : " << std::endl;
    std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (hex) : " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (oct) : " << std::oct << neg_int << std::endl;

    //uppercase and nouppercase
    std::cout << "pos_int (uppercase) : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;

    //fixed and scientific : for floating point values
    double a{ 3.1415926535897932384626433832795 };
    double b{ 2006.0 };
    double c{ 1.34e-10 };
    
    std::cout << std::endl;
    std::cout << "double values (default : use scientific where necessary) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    
    std::cout << std::endl;
    std::cout << "double values (fixed) : " << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    
    std::cout << std::endl;
    std::cout << "double values (scientific) : " << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (back to defaults) : " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed); // Hack
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    //setprecision() : the number of digits printed out for a floating point. Default is 6
    //If the precision is bigger than supported by the type, you'll just print garbage.
    a = 3.1415926535897932384626433832795;
    std::cout << std::endl;
    std::cout << "a (default precision(6)) : " << a <<  std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;      

    //showpoint and noshowpoint : show trailing zeros if necessary
    //Force output of the decimal point
    double d {34.1};
    double e {101.99};
    double f {12.0};
    int    g {45};

    std::cout << std::endl;
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12
    std::cout << "g : " << g << std::endl;
    
    std::cout << std::endl;
    std::cout << "showpoint: " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12.0
    std::cout << "g : " << g << std::endl;
}