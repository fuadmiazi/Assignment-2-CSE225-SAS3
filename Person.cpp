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
    PutItem(CustomerName);
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
void Person<ItemType>::PrintAllInformations()
{
    PrintAllInformations();
}


