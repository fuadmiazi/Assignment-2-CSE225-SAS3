#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED

using namespace std;
template <class ItemType>
class Customer : public Person{

public:
    Customer();
    ~Customer();
    void setNationalId(ItemType NationalId);
    ItemType getNationalId(ItemType NationalId, bool &found);

    void setphoneNumber(ItemType PhoneNumber);
    ItemType getPhoneNumber(ItemType PhoneNumber, bool &found);

private:
    Person<PhoneNumber> numbers;
    ItemType nidNumber;
    ItemType phoneNumber;

};
#endif // CUSTOMER_H_INCLUDED
