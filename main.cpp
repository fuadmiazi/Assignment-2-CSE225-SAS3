#include <iostream>
#include "Person.cpp"

using namespace std;

int main()
{
    Person<string>FuadList;

    FuadList.setCustomerName("Fuad");

    FuadList.getCustomerName();

    return 0;
}
