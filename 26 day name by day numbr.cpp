//Print the day name according to the day number.

#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"enter the day(1-7): "<<endl;
    cin>>day;

    switch(day){
        case 1:
        cout<<"Sunday"<<endl;
        break;

        case 2:
        cout<<"Monday"<<endl;
        break;

        case 3:
        cout<<"Tuesday"<<endl;
        break;

        case 4:
        cout<<"wednesday"<<endl;
        break;
        
        case 5:
        cout<<"Thrusday"<<endl;
        break;
        
        case 6:
        cout<<"Friday"<<endl;
        break;
        
        
        case 7:
        cout<<"Saturday"<<endl;
        break;
        
        default:
        cout<<"Invalid!"<<endl;
    }
    return 0;
}