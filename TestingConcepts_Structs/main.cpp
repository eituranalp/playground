//cd D:\.Programs\VisualStudioProjects\3.ChapterTestingConcepts
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>       //numeric limits 
#include <cmath>        //math functions 
#include <vector>       //vector functions
using namespace std;

struct point{
        int x=0;
        int y=0;
        //functions
        void printPoint(){
            std::cout << "Midpoint: (" << x << ", " << y << ")" << std::endl;
        }
    };
point findMidPt(point pt1, point pt2){
    int xMP=(pt1.x + pt2.x)/2;
    int yMP=(pt1.y + pt2.y)/2;
    return point{xMP,yMP};
}
struct line{
        point start;
        point end;
        //point midPt;
        std::string color="white";

        //functions 
        point getMidPt()const{
            return findMidPt(start, end);
        }
        point getMidPtFromStartPoints(line other){
            return findMidPt(start, other.start);
        }
        point getMidPtFromStartEnd(line other){
            return findMidPt(end, other.end);
        }
        point getMidPtWithAnotherLineMidPt(const line& other){
            point mid1=getMidPt();
            point mid2=other.getMidPt();
            return findMidPt(mid1, mid2);
        }
        //constructor
        line(point s, point e) : start(s), end(e) {}
    };
    
int main(){

    //--------------------------------------------------------


    line line1{{15,15},{30,60}};
    line line2{{75,26},{101,62}};
    point midLine1 = line1.getMidPt();
    midLine1.printPoint();

    point midOfLines =line1.getMidPtWithAnotherLineMidPt(line2);
    midOfLines.printPoint();

    
    return 0;
}