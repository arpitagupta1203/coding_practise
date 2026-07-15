//Find whether the entered character is an alphabet, digit, or special character

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character: "<<endl;
    cin>>ch;

    if((ch>='a' && ch<= 'z') || (ch>='A' && ch <='Z')){
        cout<<"Alphabet"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Digit"<<endl;
    }
    else{
        cout<<"Special Characther"<<endl;
    }
    return 0;
}