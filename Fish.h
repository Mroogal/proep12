#include <vector>
#include <fstream>
#include "Body.h"
#include "Back_Fin.h"
#include "Side_Fin.h"

class Fish:public Drawing_Element{
    public:
    Fish(){
    fish_elements.push_back(new Body);number_of_elements++;
    fish_elements.push_back(new Back_Fin);number_of_elements++;
    fish_elements.push_back(new Side_Fin);number_of_elements++;
}
    void draw(int klatka_number,std::ofstream& c){
    for(int i=0;i<number_of_elements;i++)
    fish_elements[i]->draw(klatka_number,c);
}
    ~Fish(){}
    std::vector <Drawing_Element*> fish_elements;
    int number_of_elements=0;
};