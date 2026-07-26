//Find the sum of digits

#include <iostream>
using namespace std;

int main(){

    int num,digit,sum=0;
    cout<<"Enter a number: "<<endl;
    cin>>num;

    while(num>0){
        digit=num%10;
        sum +=digit;
        num /=10;
    }

    cout<<"Sum of digit is: "<<sum<<endl;
    return 0;
}