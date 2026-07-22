//Find the sum of first N natural numbers.(by for)

#include <iostream>
using namespace std;
int main(){

    int i,n,sum=0;
    cout<<"Enter any natural number: "<<endl;
    cin>>n;

    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Sum of natural number is: "<<sum<<endl;
    return 0;
}