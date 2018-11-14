#include "Person.h"
#include<iostream>
#include<string>

using namespace std;

template<class ItemType>
Person<ItemType>::Person()
{
    customerName = NULL;
    fathersName = nullptr;
    mothersName = nullptr;
    maritalStatus = nullptr;
    nationalId = nullptr;
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

}

template<class ItemType>
void Person<ItemType>::setCustomerName(ItemType CustomerName)
{
    //customerName = CustomerName;
    NodeType* location = new NodeType;
    location->info = CustomerName;
    location->next = customerName;
    customerName = location;
    length++;
}

template<class ItemType>
ItemType Person<ItemType>::getCustomerName()
{
    NodeType* temp = customerName;
    while(temp!=NULL)
    {
        cout<<temp->info;
        temp = temp ->next;
    }
}



