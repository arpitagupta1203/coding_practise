//Find GCD of two numbers.

#include <iostream>
using namespace std;

int main(){
    int a,b,smallest;
    int gcd=1;

    cout<<"enter a number: "<<endl;
    cin>>a;
    cout<<"Enter a number: "<<endl;
    cin>>b;

    if(a<b){
        smallest=a;
    }
    else{
        smallest=b;
    }

    for(int i=1;i<=smallest;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<gcd;
    return 0;
}