//Check whether a character is uppercase or lowercase.

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character: "<<endl;
    cin>>ch;

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<= 'z')){

        if(ch>='A' && ch<='Z'){
            cout<<"Upper case !"<<endl;
        }
        else{
            cout<<"Lower Case !"<<endl;
        }
    }
    else{
        cout<<"invalid! "<<endl;
    }
    return 0;
}