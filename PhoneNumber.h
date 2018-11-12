#ifndef PHONENUMBER_H_INCLUDED
#define PHONENUMBER_H_INCLUDED

using namespace std;

class PhoneNumber : public Person{

private:
    ItemType NidNumber;
    ItemType PhoneNumber;
    //Person<PhoneNumber> number;

public:
    PhoneNumber();
    ~PhoneNumber();
    void setNidNumber(ItemType NidNumber);
    ItemType getNidNumber();
    void setPhoneNumber(ItemType PhoneNumber);
    ItemType getPhoneNumber();



};

#endif // PHONENUMBER_H_INCLUDED
