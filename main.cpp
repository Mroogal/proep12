#include "Fish.h"
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    Fish fish;
    ofstream rysunek3("rysunek3.svg");
    //header(rysunek1);
    fish.draw(3,rysunek3);
    //closer(rysunek1);
    rysunek3.close();

    return 0;
}