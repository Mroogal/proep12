#include "Aquarium.h"
#include <fstream>
#include <iostream>
#include <vector>


int main(){
    Aquarium aquarium;
    std::ofstream rysunek1("rysunek1.svg");
    beggining(rysunek1);
    aquarium.draw(1,rysunek1);
    ending(rysunek1);
    rysunek1.close();

    return 0;
}