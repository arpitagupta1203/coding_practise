// Print your name 10 times using a loop

#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"enter the name"<<endl;
    cin>>name;

    for(int i=1; i<11;i++){
        cout <<i<<". "<<name<<endl;
    }

    return 0;
}