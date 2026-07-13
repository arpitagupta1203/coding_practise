//Check whether a number is even or odd.

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number to check whther even or odd! "<<endl;
    cin>>a;

    if(a%2 ==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    return 0;
}