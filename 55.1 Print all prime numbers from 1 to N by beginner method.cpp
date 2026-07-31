// Print all prime numbers from 1 to N.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int num=2;num<=n;num++){ //outer loop: takes number form 2 to n

        int count=0;    //store the factor of a number

        for(int i=1;i<=num;i++){ //inner loop: it takes number from 1 to n to check divisiblity

            if(num%i ==0){      //to check num divisible from every n
                count++;
            }
        }
        if(count == 2){
            cout<<num<<" ";
        }
    }
    return 0;
}