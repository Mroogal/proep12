#include <fstream>
#include <iostream>

class Side_Fin: public Body_Part{
    public:
    virtual void draw(int j,std::ofstream& c){
    if(j==1)
c << "<path d=\"M476.92 299.2L448.39 315.84L448.39 281.36L476.92 299.2Z\" id=\"f2o96Owhss\"/>";
    if(j==2)
c << "<pathstyle=\"fill:#2affd5;stroke:#000000;stroke-width:0.21722052px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1\" d=\"M 46.847102,143.57947 59.030679,132.95689 47.862404,123.09308 Z\" id=\"path3729\" inkscape:connector-curvature=\"0\" />";
    if(j==3)
c << "<path xmlns=\"http://www.w3.org/2000/svg\" style=\"fill:#2affd5;stroke:#000000;stroke-width:0.21722052px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1\" d=\"M 46.847102,143.57947 59.030679,132.95689 47.862404,123.09308 Z\" id=\"path3729\" xmlns:inkscape=\"http://www.inkscape.org/namespaces/inkscape\" inkscape:connector-curvature=\"0\"/>";
}
};