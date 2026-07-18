// without switch statement

#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter the character: "<<endl;
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<char(ch-32)<<endl;
    }
    else{
        cout<<"invalid"<<endl;
    }
    return 0;
}