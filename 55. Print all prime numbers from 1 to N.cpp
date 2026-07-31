// Print all prime numbers from 1 to N.

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    for(int num=2;num<=n;num++){   //check number from 2 to n

        bool isPrime =true;        //assuming number is prime

        for(int i=2;i<num;i++){     //check whether any number from 2 to n-1 divides with number

            if(num%i==0){
                isPrime=false;
                break;      //breaks immediately as the number is divided as the prime number gets false
            }
        }
        if(isPrime){
            cout<<num<<" ";
        }
    }
    return 0;
}