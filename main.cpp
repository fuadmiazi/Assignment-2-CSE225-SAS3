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
    Person<string>PersonList1;

    //Assigning customer 1 info;

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

    PersonList1.setCustomerName(Max[0].customerName);
    PersonList1.setFathersName(Max[0].fathersName);
    PersonList1.setMothersName(Max[0].mothersName);
    PersonList1.setMaritalStatus(Max[0].maritalStatus);
    PersonList1.setSpouseName(Max[0].spouseName);
    PersonList1.setPresentAddress(Max[0].presentAddress);
    PersonList1.setPermanentAddress(Max[0].permanentAddress);
    PersonList1.setHeight(Max[0].height);
    PersonList1.setWeight(Max[0].weight);
    PersonList1.setEyeColor(Max[0].eyeColor);
    PersonList1.setHairColor(Max[0].hairColor);

    Customer<string>CustomerInfo1;

    CustomerInfo1.setNationalId(Max[0].nationalId);
    CustomerInfo1.setPhoneNumber(Max[0].PhoneNumber[0]);
    CustomerInfo1.setPhoneNumber(Max[0].PhoneNumber[1]);
    CustomerInfo1.setPhoneNumber(Max[0].PhoneNumber[2]);
    CustomerInfo1.setPhoneNumber(Max[0].PhoneNumber[3]);
    CustomerInfo1.setPhoneNumber(Max[0].PhoneNumber[4]);
    CustomerInfo1.setPhoneNumber(Max[0].PhoneNumber[5]);

    Company<string>CompanyInfo1;

    CompanyInfo1.setOperatorsName(Max[0].Operator[0]);
    CompanyInfo1.setOperatorsName(Max[0].Operator[1]);
    CompanyInfo1.setOperatorsName(Max[0].Operator[2]);
    CompanyInfo1.setOperatorsName(Max[0].Operator[3]);
    CompanyInfo1.setOperatorsName(Max[0].Operator[4]);
    CompanyInfo1.setOperatorsName(Max[0].Operator[5]);


    //Assigning customer 2 info;

    Person<string>PersonList2;

    Max[1].customerName = "Abdul Kuddus Mia";
    Max[1].fathersName = "Goni Mia";
    Max[1].mothersName = "Rohima Begum";
    Max[1].maritalStatus = "Married";
    Max[1].nationalId = "123456786757843";
    Max[1].spouseName ="Fatema Begum";
    Max[1].presentAddress = "United States of America";
    Max[1].permanentAddress = "Saudi Arabia";
    Max[1].height = "4 feet 1 inch";
    Max[1].weight = "20kg";
    Max[1].eyeColor = "Blue";
    Max[1].hairColor = "Blond";
    Max[1].Operator[0] = "KomKothaKoiben";
    Max[1].PhoneNumber[0] = "01257564577";
    Max[1].Operator[1] = "Bangla Link";
    Max[1].PhoneNumber[1] = "01986055347";
    Max[1].Operator[2] = "Robi";
    Max[1].PhoneNumber[2] = "01886057457";
    Max[1].Operator[3] = "Teletalk";
    Max[1].PhoneNumber[3] = "01586056788";
    Max[1].Operator[4] = "KomKothaKoiben";
    Max[1].PhoneNumber[4] = "01286069920";
    Max[1].Operator[5] = "KomKothaKoiben";
    Max[1].PhoneNumber[5] = "01296467489";

    PersonList2.setCustomerName(Max[1].customerName);
    PersonList2.setFathersName(Max[1].fathersName);
    PersonList2.setMothersName(Max[1].mothersName);
    PersonList2.setMaritalStatus(Max[1].maritalStatus);
    PersonList2.setSpouseName(Max[1].spouseName);
    PersonList2.setPresentAddress(Max[1].presentAddress);
    PersonList2.setPermanentAddress(Max[1].permanentAddress);
    PersonList2.setHeight(Max[1].height);
    PersonList2.setWeight(Max[1].weight);
    PersonList2.setEyeColor(Max[1].eyeColor);
    PersonList2.setHairColor(Max[1].hairColor);

    Customer<string>CustomerInfo2;

    CustomerInfo2.setNationalId(Max[1].nationalId);
    CustomerInfo2.setPhoneNumber(Max[1].PhoneNumber[0]);
    CustomerInfo2.setPhoneNumber(Max[1].PhoneNumber[1]);
    CustomerInfo2.setPhoneNumber(Max[1].PhoneNumber[2]);
    CustomerInfo2.setPhoneNumber(Max[1].PhoneNumber[3]);
    CustomerInfo2.setPhoneNumber(Max[1].PhoneNumber[4]);
    CustomerInfo2.setPhoneNumber(Max[1].PhoneNumber[5]);

    Company<string>CompanyInfo2;

    CompanyInfo2.setOperatorsName(Max[1].Operator[0]);
    CompanyInfo2.setOperatorsName(Max[1].Operator[1]);
    CompanyInfo2.setOperatorsName(Max[1].Operator[2]);
    CompanyInfo2.setOperatorsName(Max[1].Operator[3]);
    CompanyInfo2.setOperatorsName(Max[1].Operator[4]);
    CompanyInfo2.setOperatorsName(Max[1].Operator[5]);







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
