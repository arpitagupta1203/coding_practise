// Print the squares of numbers from 1 to N.

#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter a number: "<<endl;
    cin>>N;

    for(int i=1; i<=N;i++){
        cout<<"The square of "<<i<<" is: "<<i*i<<endl;
    }
    return 0;
}