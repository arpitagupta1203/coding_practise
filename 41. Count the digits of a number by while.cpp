//Count the digits of a number.

#include <iostream>
using namespace std;
int main(){
     
    int num, count=0;
    cout<<"Enter a digit: "<<endl;
    cin>>num;

    while(num>0){
        count++;
        num /= 10;
    }

    cout<<"The number of digits are: "<<count<<endl;
    return 0;
}