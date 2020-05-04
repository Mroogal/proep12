#include <iostream>

class Drawing_Element {
    public:
    virtual void draw(int,std::ofstream&)=0;
};