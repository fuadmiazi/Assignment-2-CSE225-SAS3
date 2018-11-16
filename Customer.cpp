#include "Customer.h"
#include "Person.h"
#include "Person.cpp"
#include <iostream>
#include <string>

using namespace std;

template<class ItemType>
Customer<ItemType>::Customer()
{
    //nidNumber = nullptr;
    //phoneNumbeer = nullptr;
}

template<class ItemType>
Customer<ItemType>::~Customer()
{

}

template<class ItemType>
void Customer<ItemType>::setNationalId(ItemType NationalId)
{
    NationalId = nidNumber;
    numbers.PutItem(NationalId);
}

template<class ItemType>
ItemType Customer<ItemType>::getNationalId(ItemType NationalId, bool &found)
{
    return numbers.GetItem(NationalId, true);
}

template<class ItemType>
void Customer<ItemType>::setPhoneNumber(ItemType PhoneNumber)
{
    PhoneNumber = phoneNumber;
    numbers.PutItem(PhoneNumber);
}

template<class ItemType>
ItemType Customer<ItemType>::getPhoneNumber(ItemType PhoneNumber, bool &found)
{
    return numbers.GetItem(PhoneNumber, true);
}


