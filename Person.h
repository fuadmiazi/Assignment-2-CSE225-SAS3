#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include<string>

const int MAX_ITEMS = 15;

using namespace std;

template<class ItemType>
class Person
{
public:
    Person();
    ~Person();
    void setCustomerName(ItemType CustomerName);
    void getCustomerName();
    void setFathersName(ItemType FathersName);
    void getFathersName();
    void setMothersName(ItemType MothersName);
    void getMothersName();
    void setMaritalStatus(ItemType MaritalStatus);
    void getMaritalStatus();
    void setNationalId(ItemType NationalId);
    void getNationalId();
    void setSpouseName(ItemType SpouseName);
    void getSpouseName();
    void setPresentAddress(ItemType PresentAddress);
    void getPresentAddress();
    void setPermanentAddress(ItemType PermanentAddress);
    void getPermanentAddress();
    void setHeight(ItemType Height);
    void getHeight();
    void setWeight(ItemType Weight);
    void getWeight();
    void setEyeColor(ItemType EyeColor);
    void getEyeColor();
    void setHairColor(ItemType HairColor);
    void getHairColor();
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
