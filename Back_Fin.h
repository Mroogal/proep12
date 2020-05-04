#include <iostream>

class Back_Fin: public Body_Part{
    public:
    virtual void draw(int j,std::ofstream& c){
    if(j==1)
c << "<path style=\"fill:#00ffcc;stroke:#000000;stroke-width:0.26458332px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1\" d=\"m 174.625,133.71428 25.70238,-0.75595 -0.75595,31.75 z\"/>";
    if(j==2)
c << "<path style=\"fill:#2affd5;stroke:#000000;stroke-width:0.26458332px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1\" d=\"m 89.202381,132.20238 35.529759,-0.75595 -0.75595,-27.21429 z\" id=\"path3743\" inkscape:connector-curvature=\"0\" />";
    if(j==3)
c << "<path xmlns=\"http://www.w3.org/2000/svg\" style=\"fill:#2affd5;stroke:#000000;stroke-width:0.26458332px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1\" d=\"m 89.202381,132.20238 35.529759,-0.75595 -0.75595,-27.21429 z\" id=\"path3743\" xmlns:inkscape=\"http://www.inkscape.org/namespaces/inkscape\" inkscape:connector-curvature=\"0\"/>";
}
};