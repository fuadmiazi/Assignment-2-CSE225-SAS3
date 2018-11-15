#include <iostream>
#include "Person.cpp"
#include <string>
//#include "UnsortedType.cpp"

using namespace std;

int main()
{
   Person<ItemType>FuadList;

   FuadList.setCustomerName("Fuad");

  //  FuadList.getCustomerName();
  //cout<<"Code Runs";
    FuadList.PrintAllInformations();

    return 0;
}
