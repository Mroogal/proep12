#include <vector>
#include <fstream>
#include "Body_Part.h"
#include "Body.h"
#include "Back_Fin.h"
#include "Side_Fin.h"

class Fish{
    public:
    Fish(){
    fish_parts.push_back(new Body);number_of_parts++;
    fish_parts.push_back(new Back_Fin);number_of_parts++;
    fish_parts.push_back(new Side_Fin);number_of_parts++;
}
    void draw(int klatka_number,std::ofstream& c){
    for(int i=0;i<number_of_parts;i++)
    fish_parts[i]->draw(klatka_number,c);
}
    ~Fish(){}
    std::vector <Body_Part*> fish_parts;
    int number_of_parts=0;
};