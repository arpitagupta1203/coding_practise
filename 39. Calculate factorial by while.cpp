//Calculate factorial

#include <iostream>
using namespace std;
int main(){

    int n,i=1;
    long long fact =1;

    cout<<"enter a number for factorial: "<<endl;
    cin>>n;

    while(i<=n){
        fact *=i;
        i++;
    }

    cout<<"The fatorial of "<<n<<" is: "<<fact<<endl;
    return 0;
}