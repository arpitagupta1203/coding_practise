//Find the product of digits

#include<iostream>
using namespace std;

int main(){
 
    int multi=1,num,digit;
    cout<<"Enter Number: "<<endl;
    cin>>num;

    while(num>0){
        digit=num%10;
        multi *= digit;
        num /=10;
    }

    cout<<"The multiplication of number is: "<<multi<<endl;
    return 0;
}