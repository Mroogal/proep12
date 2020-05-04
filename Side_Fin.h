#include <fstream>
#include <iostream>

class Side_Fin: public Body_Part{
    public:
    virtual void draw(int j,std::ofstream& c){
    if(j==1)
c << "<path style=\"fill:#2affd5;stroke:#000000;stroke-width:0.26458332px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1\" d=\"M 139.85119,144.29762 157.99405,133.71428 141.3631,123.8869 Z\" />";
    if(j==2)
c << "<path style=\"fill:#2affd5;stroke:#000000;stroke-width:0.19626993px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1\" d=\"m 95.224348,144.35388 9.928832,-10.64174 -9.101426,-9.8816 z\" id=\"path3729\"/>";
    if(j==3)
c << "<path xmlns=\"http://www.w3.org/2000/svg\" style=\"fill:#2affd5;stroke:#000000;stroke-width:0.21722052px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1\" d=\"M 46.847102,143.57947 59.030679,132.95689 47.862404,123.09308 Z\" id=\"path3729\" xmlns:inkscape=\"http://www.inkscape.org/namespaces/inkscape\" inkscape:connector-curvature=\"0\"/>";
}
};