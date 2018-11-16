#include "Customer.h"
#include "Person.h"
#include "Person.cpp"
#include <iostream>
#include <string>

using namespace std;

template<class ItemType>
Customer<ItemType>::Customer()
{
    nidNumber = nullptr;
    phoneNumbeer = nullptr;
}
