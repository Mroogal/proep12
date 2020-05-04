#include <vector>
#include <fstream>
#include "Drawing_Element.h"
#include "Weed.h"
#include "Fish.h"

class Aquarium{
    public:
    Aquarium(){
        aquarium_elements.push_back(new Fish);number_of_elements++;
        aquarium_elements.push_back(new Weed);number_of_elements++;
    }
    std::vector <Drawing_Element*> aquarium_elements;
    void draw(int klatka_number,std::ofstream& c){
        for(int i=0;i<number_of_elements;i++)
    aquarium_elements[i]->draw(klatka_number,c);
    }
    int number_of_elements=0;
    ~Aquarium(){}
};

void beggining(std::ofstream& c){
    c << "<svg xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" version=\"1.1\" preserveAspectRatio=\"xMidYMid meet\" viewBox=\"0 0 640 640\" width=\"640\" height=\"640\">";
}

void ending(std::ofstream& c){
    c <<"</svg>";
};