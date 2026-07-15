//Find the smallest among three numbers

#include<iostream>
using namespace std;
int main(){
    int a, b,c;
    cout<<"Enter 3 numbers a,b,c: "<<endl;
    cin>>a>>b>>c;

    if(a<b && a<c){
        cout<<"A is smallest "<<endl;
    }
    else if( b<a && b<c){
        cout<<"B is smallest "<<endl;
    }
    else{
        cout<<"C is smallest "<<endl;
    }
    return 0;
}