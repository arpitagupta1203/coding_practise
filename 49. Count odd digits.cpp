//Count odd digits.

#include <iostream>
using namespace std;
int main(){
    int num,digit,odd=0;

    cout<<"Enter a number: "<<endl;
    cin>>num;

    while(num>0){
        digit=num%10;
        if(digit%2 != 0){
            odd++;
        }
        num /=10;
    }

    cout<<"odd digits are: "<<odd<<endl;
    return 0;
}