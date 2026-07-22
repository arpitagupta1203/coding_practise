//Calculate factorial.

#include <iostream>
using namespace std;
int main(){
    int n,i;
    long long fact=1;

    cout<<"Enter a number: "<<endl;
    cin>>n;

    for(i=1;i<=n;i++){
        fact *= i;
    }
    cout<<"Factorial is: "<<fact<<endl;
    return 0;
}