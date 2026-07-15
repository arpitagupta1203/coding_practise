//Find the absolute value of a number.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number: "<<endl;
    cin>>num;

    if(num<0){
        num= -num;
    }
    cout<<"Absolute number is: "<<num<<endl;
    return 0;
}