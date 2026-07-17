//Convert lowercase letters to uppercase using switch

#include<iostream>
using namespace std;

int main(){
    char ch;

    cout<<"Enter a character (a-z) in lower case: " <<endl;
    cin>>ch;
    switch(ch){

        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        
        cout<<char(ch-32)<<endl;
        break;

        default:
        cout<<"invalid input!"<<endl;
    }    
    return 0;

}