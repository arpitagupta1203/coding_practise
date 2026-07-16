// Make a simple calculator (+, -, *, /)

#include<iostream>
using namespace std;
int main(){
    float a,b;
    char op;

    cout<<"Enter two number: "<<endl;
    cin>>a>>b;
    cout<<"Enter the operator: "<<endl;
    cin>>op;

    switch(op){
        case '+':
            cout<<a+b<<endl;
            break;
        
        case '-':
            cout<<a-b<<endl;
            break;

        case '*':
            cout<<a*b<<endl;
            break;
        
        case '/':
            if(b==0){
                cout<<"not possible"<<endl;
            }
            else{
                cout<<a/b<<endl;
            }
        break;

        default:
            cout<<"invalid input"<<endl;
    }
    return 0;

}