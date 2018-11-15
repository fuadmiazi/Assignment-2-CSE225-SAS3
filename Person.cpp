#include "Person.h"
#include "UnsortedType.h"
#include "UnsortedType.cpp"
#include<iostream>
#include<string>

using namespace std;

template<class ItemType>
Person<ItemType>::Person()
{

}
template<class ItemType>
Person<ItemType>::~Person()
{

}
template<class ItemType>
void Person<ItemType>::setCustomerName(ItemType CustomerName)
{
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
    PutItem(MaritalStatus);
}

template<class ItemType>
ItemType Person<ItemType>::getMaritalStatus(ItemType MaritalStatus, bool &found)
{
    GetItem(MaritalStatus, true);
}

template<class ItemType>
void Person<ItemType>::setNationalId(ItemType NationalId)
{
    PutItem(NationalId);
}

template<class ItemType>
ItemType Person<ItemType>::getNationalId(ItemType NationalId, bool &found)
{
    GetItem(NationalId, true);
}

template<class ItemType>
void Person<ItemType>::setSpouseName(ItemType SpouseName)
{
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
    PrintInfo(PrintAllInformations());
}


