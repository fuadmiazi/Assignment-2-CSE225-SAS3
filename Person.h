#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include<string>
#include "UnsortedType.h"

//const int MAX_ITEMS = 15;

using namespace std;

template<class ItemType>
class Person
{
public:
    Person();
    ~Person();
    void setCustomerName(ItemType CustomerName);
    ItemType getCustomerName(ItemType CustomerName, bool &found);

    void setFathersName(ItemType FathersName);
    ItemType getFathersName(ItemType FathersName, bool &found);

    void setMothersName(ItemType MothersName);
    ItemType getMothersName(ItemType MothersName, bool &found);

    void setMaritalStatus(ItemType MaritalStatus);
    ItemType getMaritalStatus(ItemType MaritalStatus, bool &found);

    void setNationalId(ItemType NationalId);
    ItemType getNationalId(ItemType NationalId, bool &found);

    void setSpouseName(ItemType SpouseName);
    ItemType getSpouseName(ItemType SpouseName, bool &found);

    void setPresentAddress(ItemType PresentAddress);
    ItemType getPresentAddress(ItemType PresentAddress, bool &found);

    void setPermanentAddress(ItemType PermanentAddress);
    ItemType getPermanentAddress(ItemType PermanentAddress, bool &found);

    void setHeight(ItemType Height);
    ItemType getHeight(ItemType Height, bool &found);

    void setWeight(ItemType Weight);
    ItemType getWeight(ItemType Weight, bool &found);

    void setEyeColor(ItemType EyeColor);
    ItemType getEyeColor(ItemType EyeColor, bool &found);

    void setHairColor(ItemType HairColor);
    ItemType getHairColor(ItemType HairColor, bool &found);

    void PrintAllInformations();

private:
    UnsortedType<Person>Unsort;
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
