//Display the number of days in a month.

#include<iostream>
using namespace std;

int main(){
    int month;
    cout<<"enter month (1-12): "<<endl;
    cin>>month;

    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

        cout<<"31 days";
        break;

        case 4:
        case 6:
        case 11:
        case 9:
        cout<<"30 days";
        break;
        
        case 2:
        cout<<"28 Days";
        break;

        default:
        cout<<"Invalid input";
        break;
    }

    return 0;

}