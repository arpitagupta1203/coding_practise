//Calculate the power (a^b) using loops.

#include <iostream>
using namespace std;

int main(){
    int a,b;
    int power=1;

    cout<<"enter a number: "<<endl;
    cin>>a;
    cout<<"Enter a number to which power is to be raised: "<<endl;
    cin>>b;

    for(int i=1;i<=b;i++){
        power=power*a;
    }

    cout<<power<<endl;
    return 0;
}