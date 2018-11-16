#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED

#include "UnsortedType.h"
#include "Person.h"
#include "Person.cpp"

using namespace std;
template <class ItemType>
class Customer : public Person
{

public:
    Customer();
    ~Customer();
    void setNationalId(ItemType NationalId);
    ItemType getNationalId(ItemType NationalId, bool &found);

    void setPhoneNumber(ItemType PhoneNumber);
    ItemType getPhoneNumber(ItemType PhoneNumber, bool &found);

    void registerNewNumber(ItemType newNumber);

    void PrintAllCustomer();

private:
    UnsortedType<Customer> numbers;
    ItemType nidNumber;
    ItemType phoneNumber;

};
#endif // CUSTOMER_H_INCLUDED
