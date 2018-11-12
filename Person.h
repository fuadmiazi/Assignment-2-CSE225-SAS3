#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include<string>

//const int MAX_ITEMS = 15;

using namespace std;

template<class ItemType>
class Person
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    Person();
    ~Person();
    void setCustomerName(ItemType CustomerName);
    ItemType getCustomerName();
    /*void setFathersName(ItemType FathersName);
    ItemType getFathersName();
    void setMothersName(ItemType MothersName);
    ItemType getMothersName();
    void setMaritalStatus(ItemType MaritalStatus);
    ItemType getMaritalStatus();
    void setNationalId(ItemType NationalId);
    ItemType getNationalId();
    void setSpouseName(ItemType SpouseName);
    ItemType getSpouseName();
    void setPresentAddress(ItemType PresentAddress);
    ItemType getPresentAddress();
    void setPermanentAddress(ItemType PermanentAddress);
    ItemType getPermanentAddress();
    void setHeight(ItemType Height);
    ItemType getHeight();
    void setWeight(ItemType Weight);
    ItemType getWeight();
    void setEyeColor(ItemType EyeColor);
    ItemType getEyeColor();
    void setHairColor(ItemType HairColor);
    ItemType getHairColor();*/
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
