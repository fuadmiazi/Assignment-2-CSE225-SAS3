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
ItemType Person<ItemType>::getCustomerName()
{

}
template<class ItemType>
void Person<ItemType>::PrintAllInformations()
{

}


