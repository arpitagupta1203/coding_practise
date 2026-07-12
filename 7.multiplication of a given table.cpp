// Print the multiplication table of a given number

#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter a number: "<<endl;
    cin>>i;

    for(int j=1;j<=10;j++){
        cout<<i<< " X "<<j<<" = "<<i*j<<endl;
    }
    return 0;
}