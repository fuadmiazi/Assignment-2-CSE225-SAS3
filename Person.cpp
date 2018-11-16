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
    return Unsort.GetItem(CustomerName, true);
}

template<class ItemType>
void Person<ItemType>::setFathersName(ItemType FathersName)
{
    FathersName = fathersName;
    Unsort.PutItem(FathersName);
}

template<class ItemType>
ItemType Person<ItemType>::getFathersName(ItemType FathersName, bool &found)
{
   return Unsort.GetItem(FathersName, true);
}

template<class ItemType>
void Person<ItemType>::setMothersName(ItemType MothersName)
{
    MothersName = mothersName;
    Unsort.PutItem(MothersName);
}

template<class ItemType>
ItemType Person<ItemType>::getMothersName(ItemType MothersName, bool &found)
{
    return Unsort.GetItem(MothersName, true);
}

template<class ItemType>
void Person<ItemType>::setMaritalStatus(ItemType MaritalStatus)
{
    MaritalStatus = maritalStatus;
    Unsort.PutItem(MaritalStatus);
}

template<class ItemType>
ItemType Person<ItemType>::getMaritalStatus(ItemType MaritalStatus, bool &found)
{
    return Unsort.GetItem(MaritalStatus, true);
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
    Unsort.PutItem(SpouseName);
}

template<class ItemType>
ItemType Person<ItemType>::getSpouseName(ItemType SpouseName, bool &found)
{
    return Unsort.GetItem(SpouseName, true);
}

template<class ItemType>
void Person<ItemType>::setPresentAddress(ItemType PresentAddress)
{
    PresentAddress = presentAddress;
    Unsort.PutItem(PresentAddress);
}

template<class ItemType>
ItemType Person<ItemType>::getPresentAddress(ItemType PresentAddress, bool &found)
{
    return Unsort.GetItem(PresentAddress, true);
}

template<class ItemType>
void Person<ItemType>::setPermanentAddress(ItemType PermanentAddress)
{
    PermanentAddress = permanentAddress;
    Unsort.PutItem(PermanentAddress);
}

template<class ItemType>
ItemType Person<ItemType>::getPermanentAddress(ItemType PermanentAddress, bool &found)
{
    return Unsort.GetItem(PermanentAddress, true);
}

template<class ItemType>
void Person<ItemType>::setHeight(ItemType Height)
{
    Height = height;
    Unsort.PutItem(Height);
}

template<class ItemType>
ItemType Person<ItemType>::getHeight(ItemType Height, bool &found)
{
    return Unsort.GetItem(Height, true);
}

template<class ItemType>
void Person<ItemType>::setWeight(ItemType Weight)
{
    Weight = weight;
    Unsort.PutItem(Weight);
}

template<class ItemType>
ItemType Person<ItemType>::getWeight(ItemType Weight, bool &found)
{
    return Unsort.GetItem(Weight, true);
}

template<class ItemType>
void Person<ItemType>::setEyeColor(ItemType EyeColor)
{
    EyeColor = eyeColor;
    Unsort.PutItem(EyeColor);
}

template<class ItemType>
ItemType Person<ItemType>::getEyeColor(ItemType EyeColor, bool &found)
{
    return Unsort.GetItem(EyeColor, true);
}

template<class ItemType>
void Person<ItemType>::setHairColor(ItemType HairColor)
{
    HairColor = hairColor;
    Unsort.PutItem(HairColor);
}

template<class ItemType>
ItemType Person<ItemType>::getHairColor(ItemType HairColor, bool &found)
{
    return Unsort.GetItem(HairColor, true);
}








template<class ItemType>
void Person<ItemType>::PrintAllInformations()
{
    Unsort.PrintInfo();
}


