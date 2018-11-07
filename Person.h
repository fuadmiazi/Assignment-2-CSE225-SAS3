#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

using namespace std;

class Person
{
private:
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

public:
    Person();
    ~Person();
    string setCustomerName(string);
    string setFathersName(string);
    string setMothersName(string);
    string setMaritalStatus(string);
    string setNationalId(string);
    string setSpouseName(string);
    string setPresentAddress(string);
    string setPermanentAddress(string);
    string setHeight(string);
    string setWeight(string);
    string setEyeColor(string);
    string setHairColor(string);
    void PrintAllInformations();

};
#endif // PERSON_H_INCLUDED
