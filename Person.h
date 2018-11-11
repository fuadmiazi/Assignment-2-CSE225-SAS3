#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include<string>

const int MAX_ITEMS = 2;

using namespace std;

template<class ItemType>
class Person
{
public:
    Person();
    ~Person();
    void setCustomerName();
    void setFathersName();
    void setMothersName();
    void setMaritalStatus();
    void setNationalId();
    void setSpouseName();
    void setPresentAddress();
    void setPermanentAddress();
    void setHeight();
    void setWeight();
    void setEyeColor();
    void setHairColor();
    void PrintAllInformations();

private:
    ItemType customerName;
    ItemType fathersName;
    ItemType mothersName;
    ItemType maritalStatus;
    ItemType nationalId;
    ItemType spouseName;
    ItemType presentAddress;
    ItemType permanentAddress;
    ItemType height;
    ItemType weight;
    ItemType eyeColor;
    ItemType hairColor;


};
#endif // PERSON_H_INCLUDED
