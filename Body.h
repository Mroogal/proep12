#include <iostream>

class Body: public Body_Part{
    public:
    virtual void draw(int j,std::ofstream& c){
    if(j==1)
c << "<ellipse id=\"path3721\" cx=\"145.89882\" cy=\"135.22618\" rx=\"38.55357\" ry=\"24.190477\" style=\"stroke-width:0.26458332;fill:#5fd38d\"/>";
    if(j==2)
c << "<ellipse id=\"path3721\" cx=\"61.988106\" cy=\"132.95833\" rx=\"38.55357\" ry=\"24.190477\" style=\"fill:#5fd38d;stroke-width:0.26458332\" />";
    if(j==3)
c << "<ellipse xmlns=\"http://www.w3.org/2000/svg\" id=\"path3721\" cx=\"61.988106\" cy=\"132.95833\" rx=\"38.55357\" ry=\"24.190477\" style=\"fill:#5fd38d;stroke-width:0.26458332\"/>";
}
};