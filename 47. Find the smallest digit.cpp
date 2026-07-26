// Find the smallest digit

#include <iostream>
using namespace std;

int main(){
    int num,digit,smallest=9;

    cout<<"Enter a digit: "<<endl;
    cin>>num;

    while(num>0){
        digit = num%10;
        if(digit <smallest){
            smallest=digit;
        }
        num /=10;
    }
    cout<<"The smallest digit is: "<<smallest<<endl;
    return 0;
}