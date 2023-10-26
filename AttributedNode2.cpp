#include <iostream>
#include "AttributedNode2.h"
using namespace std;

AttributedNode2::AttributedNode2(){
    Profession="0";
    City="0";
}
AttributedNode2::~AttributedNode2(){}

void AttributedNode2::setProfession(string profession){
    Profession = profession;
    }
void AttributedNode2::setCityName(string city){
    City=city;
    }
string AttributedNode2::getProfession(){
    return Profession;
    }
string AttributedNode2::getCityName(){
    return City;
    }