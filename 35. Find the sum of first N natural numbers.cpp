//Find the sum of first N natural numbers.
#include <iostream>
using namespace std;
int main(){
    int n,i=1,sum=0;
    cout<<"enter any natural number: "<<endl;
    cin>>n;

    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"sum of natural numbers till "<<sum<<" is: "<<endl;
    return 0;
}