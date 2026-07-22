//Find the product of first N natural numbers.

#include <iostream>
using namespace std;

int main(){

    int i,n,product=1;
    cout<<"Enter any natural number: "<<endl;
    cin>>n;

    for(i=1;i<=n;i++){
        product *=i;
    }

    cout<<"The product of "<<n<<" numbers is: "<<product<<endl;
    return 0;
}