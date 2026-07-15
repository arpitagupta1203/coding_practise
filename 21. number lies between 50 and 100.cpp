//Check if a number lies between 50 and 100.

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number: "<<endl;
    cin>>a;

    if( a>50 && a<100){
        cout<<a<<" lies between 50 to 100."<<endl;
    }
    else{
        cout<<a<<" do not lie between 50 to 100"<<endl;
    }
    return 0;
}