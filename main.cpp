#include <iostream>
#include "Person.cpp"

using namespace std;

int main()
{
    Person<string>FuadList;

    FuadList.setCustomerName("Fuad");
    cout<<FuadList.getCustomerName()<<endl;

    return 0;
}
