#include "Person.h"
#include<iostream>
#include<string>

using namespace std;

template<class ItemType>
Person<ItemType>::Person()
{
    customerName = "";
    fathersName = "";
    mothersName = "";
    maritalStatus = "";
    nationalId = "";
    spouseName = "";
    presentAddress = "";
    permanentAddress = "";
    height = "";
    weight = "";
    eyeColor = "";
    hairColor = "";
}
template<class ItemType>
Person<ItemType>::~Person()
{

}

template<class ItemType>
void Person<ItemType>::setCustomerName(ItemType CustomerName)
{

}


