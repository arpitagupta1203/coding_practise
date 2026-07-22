//Electricity bill category selector.

#include <iostream>
using namespace std;
int main(){
    
    int unit,choice;
    cout<<"1. Domestic consumer"<<endl;
    cout<<"2. Commercial consumer"<<endl;
    cout<<"3.Industrial consumer"<<endl;

    cout<<"Enter the type of electricity consumer you are: "<<endl;
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"You are a domestic consumer ,Enter the units of electricity: "<<endl;
        cin>>unit;
        cout<<"Your bill is: Rs."<< unit*5<<"/-"<<endl;
        break;

        case 2:
        cout<<"You are a Commercial consumer ,Enter the units of electricity: "<<endl;
        cin>>unit;
        cout<<"Your bill is: Rs."<< unit*8<<"/-"<<endl;
        break;

        case 3:
        cout<<"You are a industrial consumer ,Enter the units of electricity: "<<endl;
        cin>>unit;
        cout<<"Your bill is: Rs."<< unit*10<<"/-"<<endl;
        break;

        default:
        cout<<"Invalid !"<<endl;
    }
    return 0;
}