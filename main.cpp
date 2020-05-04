#include "Fish.h"
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    Fish fish;
    ofstream rysunek2("rysunek2.svg");
    //header(rysunek1);
    fish.draw(2,rysunek2);
    //closer(rysunek1);
    rysunek2.close();

    return 0;
}