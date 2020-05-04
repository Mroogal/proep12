#include "Fish.h"
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    Fish fish;
    ofstream rysunek1("rysunek1.svg");
    //header(rysunek1);
    fish.draw(1,rysunek1);
    //closer(rysunek1);
    rysunek1.close();

    return 0;
}