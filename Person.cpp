#include "Person.h"
#include<iostream>
#include<string>

using namespace std;

template<class ItemType>
Person<ItemType>::Person()
{
    customerName = '\0';
    fathersName = '\0';
    mothersName = '\0';
    maritalStatus = '\0';
    nationalId = '\0';
    spouseName = '\0';
    presentAddress = '\0';
    permanentAddress = '\0';
    height = '\0';
    weight = '\0';
    eyeColor = '\0';
    hairColor = '\0';
}
template<class ItemType>
Person<ItemType>::~Person()
{

}

template<class ItemType>
void Person<ItemType>::setCustomerName(ItemType CustomerName)
{
    customerName = CustomerName;
}

template<class ItemType>
ItemType Person<ItemType>::getCustomerName()
{
    return customerName;
}



