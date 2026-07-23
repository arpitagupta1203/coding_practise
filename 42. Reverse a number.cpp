//Reverse a number.

#include <iostream>
using namespace std;
int main(){
    int num,digit,reverse=0;

    cout<<"enter a number: "<<endl;
    cin>>num;

    while(num>0){
        digit = num%10;
        reverse = reverse*10+digit;
        num /= 10;
    }

    cout<<"The reverse is "<<reverse<<endl;
    return 0;
}