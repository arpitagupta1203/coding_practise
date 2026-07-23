//Count the digits of a number.

#include <iostream>
using namespace std;
int main(){
    int num,count=0;

    cout<<"enter a number: "<<endl;
    cin>>num;

    for(;num>0;num/=10){
        count++;
    }

    cout<<"Total number of digits are: "<<count<<endl;
    return 0;
}