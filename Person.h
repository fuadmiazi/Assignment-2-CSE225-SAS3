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
    int length = 0;
    NodeType * customerName = NULL;
    NodeType * fathersName = nullptr;
    NodeType * mothersName = nullptr;
    NodeType * maritalStatus = nullptr;
    NodeType * nationalId = nullptr;
    NodeType * spouseName = nullptr;
    NodeType * presentAddress = nullptr;
    NodeType * permanentAddress = nullptr;
    NodeType * height = nullptr;
    NodeType * weight = nullptr;
    NodeType * eyeColor = nullptr;
    NodeType * hairColor = nullptr;

    NodeType* currentPos = nullptr;


};
#endif // PERSON_H_INCLUDED
