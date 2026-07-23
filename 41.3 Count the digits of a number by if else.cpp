//Count the digits of a number.

#include <iostream>
using namespace std;
int main(){
    
    int num,count=0;
    cout<<"enter a number: "<<endl;
    cin>>num;

    if(num==0){
        count=1;
    }
    else{
        while(num>0){
            count++;
            num /=10;
        }
    }

    cout<<"total numbr of digits are: "<<count<<endl;
    return 0;

}