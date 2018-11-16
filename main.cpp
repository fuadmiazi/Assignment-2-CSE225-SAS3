#include <iostream>
#include "Person.cpp"
#include <string>
#include "Person.h"
#include "UnsortedType.cpp"
#include "UnsortedType.h"
#include "Person.cpp"
#include "Customer.h"
#include "Company.h"

using namespace std;
struct PhoneNumber
{
    string customerName;
    string fathersName;
    string mothersName;
    string maritalStatus;
    string nationalId;
    string spouseName;
    string presentAddress;
    string permanentAddress;
    string height;
    string weight;
    string eyeColor;
    string hairColor;
    string Operator[15];
    string PhoneNumber[15];
}Max[2];


int main()
{

    //ItemType a ="Fuad";
    Person<string>PersonList;
    PersonList.setCustomerName(PhoneNumber.customerName);
    //UnsortedType<string>Unsort;
    //Unsort.PutItem("a");
    //FuadList.setCustomerName("Fuad");

    //Unsort.PutItem("a");

  //  FuadList.getCustomerName();
  //cout<<"Code Runs";
    //FuadList.PrintAllInformations();
    //Unsort.PrintInfo();

    return 0;
}
