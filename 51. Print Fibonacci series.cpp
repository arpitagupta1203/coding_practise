//Print Fibonacci series

#include <iostream>
using namespace std;

int main(){
    int a=0,b=1;
    int c,n;

    cout<<"Enter the number upto which uh want fibonacci series: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<"the fibonacci series is: "<<a<<endl;

        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}