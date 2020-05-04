#include <iostream>
#include <fstream>

class Body: public Drawing_Element{
    public:
    virtual void draw(int j,std::ofstream& c){
    if(j==1)
c << "<path d=\"M566.08 299.2C566.08 335.28 524 364.58 472.17 364.58C420.33 364.58 378.25 335.28 378.25 299.2C378.25 263.11 420.33 233.81 472.17 233.81C524 233.81 566.08 263.11 566.08 299.2Z\" id=\"d2kpMd2AMu\"/><use xlink:href=\"#d2kpMd2AMu\" opacity=\"1\" fill=\"#42ab58\" fill-opacity=\"1\"/>";
    if(j==2)
c << "<ellipse id=\"path3721\" cx=\"61.988106\" cy=\"132.95833\" rx=\"38.55357\" ry=\"24.190477\" style=\"fill:#5fd38d;stroke-width:0.26458332\" />";
    if(j==3)
c << "<ellipse xmlns=\"http://www.w3.org/2000/svg\" id=\"path3721\" cx=\"61.988106\" cy=\"132.95833\" rx=\"38.55357\" ry=\"24.190477\" style=\"fill:#5fd38d;stroke-width:0.26458332\"/>";
    //if(j==4)
}
};