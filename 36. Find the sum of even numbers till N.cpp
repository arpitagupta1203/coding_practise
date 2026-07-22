//Find the sum of even numbers till N

#include <iostream>
using namespace std;
int main(){
    
    int n,i,sum=0;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    for(i=1;i<=n;i++){
        if(i%2==0){
            sum +=i;
        }
    }

    cout<<"Sum of even numbers till "<<n<<" is :"<<sum<<endl;
    return 0;

}