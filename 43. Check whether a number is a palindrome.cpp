//Check whether a number is a palindrome

#include <iostream>
using namespace std;

int main(){

    int num,original,digit,reverse=0;
    
    cout<<"Enter a number: "<<endl;
    cin>>num;

    original = num;

    while(num>0){
        digit=num%10;
        reverse = reverse*10+digit;
        num/=10;
    }

    if(original == reverse){
        cout<<"palindrome "<<endl;
    }
    else{
        cout<<"not paplindrome! ";
    }
    return 0;

}