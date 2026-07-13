//Check whether a number is positive, negative, or zero.

#include<iostream>
using namespace std;

int main(){
    float N;
    cout<<"Enter a number: "<<endl;
    cin>>N;

    if(N>0){
        cout<<"Positive number !"<<endl;
    }
    else if(N<0){
        cout<<"Negative number !"<<endl;
    }
    else{
        cout<<"Zero !"<<endl;
    }
    return 0;
}