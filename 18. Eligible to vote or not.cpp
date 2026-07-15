//Find whether a person is eligible to vote

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter the age: "<<endl;
    cin>>age;

    if(age>=18){
        cout<<"Eligible to vote"<<endl;
    }
    else if(age <18 && age> 0){
        cout<<"Not eligible to vote"<<endl;
    }
    else{
        cout<<"Invalid! "<<endl;
    }

    return 0;
}