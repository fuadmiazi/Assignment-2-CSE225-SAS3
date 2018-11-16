#include "Person.h"
#include "UnsortedType.h"
#include "UnsortedType.cpp"
#include<iostream>
#include<string>

using namespace std;

template<class ItemType>
Person<ItemType>::Person()
{
    customerName = nullptr;
    fathersName = nullptr;
    mothersName = nullptr;
    maritalStatus = nullptr;
    //nationalId = nullptr;
    spouseName = nullptr;
    presentAddress = nullptr;
    permanentAddress = nullptr;
    height = nullptr;
    weight = nullptr;
    eyeColor = nullptr;
    hairColor = nullptr;
}
template<class ItemType>
Person<ItemType>::~Person()
{
    Unsort.MakeEmpty();
}
template<class ItemType>
void Person<ItemType>::setCustomerName(ItemType CustomerName)
{
    CustomerName = customerName;
    Unsort.PutItem(CustomerName);
}

template<class ItemType>
ItemType Person<ItemType>::getCustomerName(ItemType CustomerName, bool &found)
{
    GetItem(CustomerName, true);
}

template<class ItemType>
void Person<ItemType>::setFathersName(ItemType FathersName)
{
    FathersName = fathersName;
    PutItem(FathersName);
}

template<class ItemType>
ItemType Person<ItemType>::getFathersName(ItemType FathersName, bool &found)
{
    GetItem(FathersName, true);
}

template<class ItemType>
void Person<ItemType>::setMothersName(ItemType MothersName)
{
    MothersName = mothersName;
    PutItem(MothersName);
}

template<class ItemType>
ItemType Person<ItemType>::getMothersName(ItemType MothersName, bool &found)
{
    GetItem(MothersName, true);
}

template<class ItemType>
void Person<ItemType>::setMaritalStatus(ItemType MaritalStatus)
{
    MaritalStatus = maritalStatus;
    PutItem(MaritalStatus);
}

template<class ItemType>
ItemType Person<ItemType>::getMaritalStatus(ItemType MaritalStatus, bool &found)
{
    GetItem(MaritalStatus, true);
}

/*template<class ItemType>
void Person<ItemType>::setNationalId(ItemType NationalId)
{
    NationalId = nationalId;
    PutItem(NationalId);
}

template<class ItemType>
ItemType Person<ItemType>::getNationalId(ItemType NationalId, bool &found)
{
    GetItem(NationalId, true);
}*/

template<class ItemType>
void Person<ItemType>::setSpouseName(ItemType SpouseName)
{
    SpouseName = spouseName;
    PutItem(SpouseName);
}

template<class ItemType>
ItemType Person<ItemType>::getSpouseName(ItemType SpouseName, bool &found)
{
    GetItem(SpouseName, true);
}

template<class ItemType>
void Person<ItemType>::setPresentAddress(ItemType PresentAddress)
{
    PresentAddress = presentAddress;
    PutItem(PresentAddress);
}

template<class ItemType>
ItemType Person<ItemType>::getPresentAddress(ItemType PresentAddress, bool &found)
{
    GetItem(PresentAddress, true);
}

template<class ItemType>
void Person<ItemType>::setPermanentAddress(ItemType PermanentAddress)
{
    PermanentAddress = permanentAddress;
    PutItem(PermanentAddress);
}

template<class ItemType>
ItemType Person<ItemType>::getPermanentAddress(ItemType PermanentAddress, bool &found)
{
    GetItem(PermanentAddress, true);
}

template<class ItemType>
void Person<ItemType>::setHeight(ItemType Height)
{
    Height = height;
    PutItem(Height);
}

template<class ItemType>
ItemType Person<ItemType>::getHeight(ItemType Height, bool &found)
{
    GetItem(Height, true);
}

template<class ItemType>
void Person<ItemType>::setWeight(ItemType Weight)
{
    Weight = weight;
    PutItem(Weight);
}

template<class ItemType>
ItemType Person<ItemType>::getWeight(ItemType Weight, bool &found)
{
    GetItem(Weight, true);
}

template<class ItemType>
void Person<ItemType>::setEyeColor(ItemType EyeColor)
{
    EyeColor = eyeColor;
    PutItem(EyeColor);
}

template<class ItemType>
ItemType Person<ItemType>::getEyeColor(ItemType EyeColor, bool &found)
{
    GetItem(EyeColor, true);
}

template<class ItemType>
void Person<ItemType>::setHairColor(ItemType HairColor)
{
    HairColor = hairColor;
    PutItem(HairColor);
}

template<class ItemType>
ItemType Person<ItemType>::getHairColor(ItemType HairColor, bool &found)
{
    GetItem(HairColor, true);
}








template<class ItemType>
void Person<ItemType>::PrintAllInformations()
{
    Unsort.PrintInfo();
}


