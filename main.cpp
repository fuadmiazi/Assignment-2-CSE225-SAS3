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
}Max[1];


int main()
{

    //ItemType a ="Fuad";
    Person<string>PersonList;
    Max[0].customerName = "Fuad Hasan";
    Max[0].fathersName = "Abul Khair Miazi";
    Max[0].mothersName = "Fahmida Azad";
    Max[0].maritalStatus = "Single";
    Max[0].nationalId = "123456789011";
    Max[0].spouseName ="It's Complicated";
    Max[0].presentAddress = "Dhaka, Bangladesh";
    Max[0].permanentAddress = "Dhaka, Bangladesh";
    Max[0].height = "5 feet 9.5 inch";
    Max[0].weight = "72kg";
    Max[0].eyeColor = "Black";
    Max[0].hairColor = "Black";
    Max[0].Operator[0] = "GrameenPhone";
    Max[0].PhoneNumber[0] = "01712257295";
    Max[0].Operator[1] = "Bangla Link";
    Max[0].PhoneNumber[1] = "01986064381";
    Max[0].Operator[2] = "Robi";
    Max[0].PhoneNumber[2] = "01886064381";
    Max[0].Operator[3] = "Teletalk";
    Max[0].PhoneNumber[3] = "01586064381";
    Max[0].Operator[4] = "KomKothaKoiben";
    Max[0].PhoneNumber[4] = "01286064381";
    Max[0].Operator[5] = "KomKothaKoiben";
    Max[0].PhoneNumber[5] = "01296458499";

    PersonList.setCustomerName(Max[0].customerName);
    PersonList.setFathersName(Max[0].fathersName);
    PersonList.setMothersName(Max[0].mothersName);
    PersonList.setMaritalStatus(Max[0].maritalStatus);
    PersonList.setSpouseName(Max[0].spouseName);
    PersonList.setPresentAddress(Max[0].presentAddress);
    PersonList.setPermanentAddress(Max[0].permanentAddress);
    PersonList.setHeight(Max[0].height);
    PersonList.setWeight(Max[0].weight);
    PersonList.setEyeColor(Max[0].eyeColor);
    PersonList.setHairColor(Max[0].hairColor);

    Customer<string>CustomerInfo;
    CustomerInfo.setPhoneNumber()
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
