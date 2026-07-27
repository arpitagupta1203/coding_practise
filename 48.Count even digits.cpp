//Count even digits.

#include <iostream>
using namespace std;

int main(){
    int num,digit,even=0;

    cout<<"Enter a number: "<<endl;
    cin>>num;

    while(num>0){
        digit=num%10;
        if(digit%2 == 0){
            even++;
        }
        num /=10;
    }

    cout<<"The total of even digits are: "<<even<<endl;
    return 0;
}