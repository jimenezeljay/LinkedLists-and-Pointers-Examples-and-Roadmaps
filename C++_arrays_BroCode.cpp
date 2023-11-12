#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int num;

    cout<<"How many cars do you have?: ";
    cin>>num;
    cin.ignore();
    
    string* pCars = new string[num];
    //pointer!

    for(int i = 0; i<num; i++) {
       
        cout<< "Enter car #"<< i+1<<" ";
        getline(cin, pCars[i]);

    }

    cout<< "\nHere is your garage!\n";
    cout<< "-------------------------\n";
//copied from the top, change the contents of the for loop
    for(int i = 0; i<num; i++) {
       cout<<"Parking spot #"<<i+1<< " "<<pCars[i]<<endl;

    }

    cout<<endl;
    return 0;


}