#ifndef ATTRIBUTEDNODE2_H
#define ATTRIBUTEDNODE2_H

using namespace std;

class AttributedNode2
{
    string Profession;
    string City;

    public:
    AttributedNode2();
    
    void setProfession(string profession);
    void setCityName(string cityName);
    string getProfession();
    string getCityName();

    ~AttributedNode2();
};

#endif