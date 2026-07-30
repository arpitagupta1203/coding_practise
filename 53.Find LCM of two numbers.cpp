// Find LCM of two numbers

#include<iostream>
using namespace std;

int main(){
    int a,b,smallest,lcm;
    int gcd=1;

    cout<<"Enter 2 numbers: "<<endl;
    cin>>a>>b;

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
    lcm= (a*b)/gcd;
    cout<<"Lcm is: "<<lcm;
    return 0;
}