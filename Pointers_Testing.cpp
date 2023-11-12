/*
Addition Help for Pointers
Youtube: BroCode
*/

#include<iostream>

using namespace std;

int main(){

    string name = "Eljay";
    int age = 18;
    string food = "Katsu";

    string* pName = &name; //pName is the one pointing to 'name' above in the string
    int* pAge = &age; //deference operator to create a name for the pointer
    string* pFood = &food;

    cout<<pName<<endl;
    cout<<pAge<<endl;
    cout<<pFood<<endl;

    cout<<endl;
    return 0;

}