// Grade description (A = Excellent, B = Good, etc.)

#include <iostream>
using namespace std;

int main(){
    char grade;
    cout<<"Enter your garde( A/B/C/D/F): "<<endl;
    cin>>grade;

    switch(grade){
        case 'A':
        cout<<"Excellent"<<endl;
        break;

        case 'B':
        cout<<"Good"<<endl;
        break;

        case 'C':
        cout<<"Average"<<endl;
        break;

        case 'D':
        cout<<"Pass"<<endl;
        break;

        case 'F':
        cout<<"Fail"<<endl;
        break;

        default:
        cout<<"Invalid"<<endl;
        break;
    }
    return 0;
}