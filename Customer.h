#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED

#include "UnsortedType.h"

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

private:
    UnsortedType<Customer> numbers;
    ItemType nidNumber;
    ItemType phoneNumber;

};
#endif // CUSTOMER_H_INCLUDED
