#include <iostream>
#include "Person.cpp"

using namespace std;

struct PhoneNumber{

string PhoneNumb[15];
string Operator[15];

}PhoneNumber[5];


int main()
{
    Person<string>FuadList;

    PhoneNumber[0].PhoneNumb[0] = "01711167395";
    PhoneNumber[0].Operator[0] = "Grameen Phone";

    FuadList.setCustomerName("Fuad");
    cout<<FuadList.getCustomerName()<<endl;

    return 0;
}
