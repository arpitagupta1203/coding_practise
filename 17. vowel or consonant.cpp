//Check whether a character is a vowel or consonant.

#include<iostream>
using namespace std;
int main(){
    
    char ch;
    cout<<"Enter a character: "<<endl;
    cin>>ch;

    if((ch>='A' && ch<= 'Z') || (ch>='a' && ch<='z')){
        if(ch == 'a' || ch=='e' || ch=='i' || ch== 'o' || ch== 'u'|| 
            ch=='A' || ch=='E' || ch=='I' || ch== 'O' || ch== 'U'){
                cout<<"Vowel !"<<endl;
            }
        else{
            cout<<"Consonant !"<<endl;
        }    
    }

    else{
        cout<<"Invalid !" <<endl;
    }
    return 0;
}