//Check whether a year is a leap year.

#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter year: "<<endl;
    cin>>year;

    if((year%4 == 0 )|| (year%400 ==0 && year%100 !=0)){
        cout<<year <<" Leap year! "<<endl;
    }
    else{
        cout<<year<<" Not a leap year! "<<endl;
    }
    return 0;
}