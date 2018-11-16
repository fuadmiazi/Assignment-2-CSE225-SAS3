#include "Company.h"
#include "Person.h"
#include "Person.cpp"
#include <iostream>
#include <string>

using namespace std;

template<class ItemType>
Company<ItemType>::Company()
{
    operatorName = nullptr;
}

template<class ItemType>
Company<ItemType>::~Company()
{
    comp.MakeEmpty();
}

template<class ItemType>
void Company<ItemType>::setOperatorsName(ItemType OperatorName)
{
    OperatorName = operatorName;
    comp.PutItem(OperatorName);
}

template<class ItemType>
IemType Company<ItemType>::getOperatorsName(ItemType OperatorName, bool &found)
{
    return comp.GetItem(OperatorName, true);
}

template<class ItemType>
void Company<ItemType>::changeOperatorName(ItemType NewOperatorName)
{
    NewOperatorName = operatorName;
}


