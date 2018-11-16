#ifndef COMPANY_H_INCLUDED
#define COMPANY_H_INCLUDED

#include "UnsortedType.h"
#include "Person.h"
#include "Person.cpp"

using namespace std;

template<class ItemType>
class Company : public Person
{
public:
    Company();
    ~Company();
    void setOperatorsName(ItemType OperatorName);
    ItemType getOperatorsName(ItemType OperatorName, bool &found);
    void changeOperatorName(ItemType NewOperatorName);
private:
    UnsortedType<Company>comp;
    ItemType operatorName;
};

#endif // COMPANY_H_INCLUDED
