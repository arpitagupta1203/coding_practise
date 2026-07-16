//Print the month name according to the month number.

#include<iostream>
using namespace std;

int main(){
    int month;
    cout<<"Enter month: "<<endl;
    cin>>month;

    switch(month){
        case 1:
        cout<<"January"<<endl;
        break ;

        case 2:
        cout<<"Feb"<<endl;
        break ;

        case 3:
        cout<<"march"<<endl;
        break;

        case 4:
        cout<<"april"<<endl;
        break;

        case 5:
        cout<<"may"<<endl;
        break;

        case 6:
        cout<<"june"<<endl;
        break;

        case 7:
        cout<<"july"<<endl;
        break;

        case 8:
        cout<<"august"<<endl;
        break;

        case 9:
        cout<<"sept"<<endl;
        break;

        case 10:
        cout<<"oct"<<endl;
        break;

        case 11:
        cout<<"nov"<<endl;
        break;

        case 12:
        cout<<"dec"<<endl;
        break;
        
        default:
        cout<<"inavalid";
    }
    return 0;

}