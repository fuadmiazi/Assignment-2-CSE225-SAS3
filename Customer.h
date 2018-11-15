#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED

using namespace std;

class Customer : public Person{

private:
    Person<PhoneNumber> numbers;

};
#endif // CUSTOMER_H_INCLUDED
