//Check whether a student passed (marks ≥ 33)

#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks:" <<endl;
    cin>>marks;
    
    if(marks >=33){
        cout<<"passed! "<<endl;
    }
    else{
        cout<<"Failed! "<<endl;
    }
    return 0;

}