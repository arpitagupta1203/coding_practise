//Menu-driven area calculator (circle, rectangle, square).
#include <iostream>
using namespace std;

int main(){

    float R,L,B,H,S;
    int choice;

    cout<<"----- Area calculator -----"<<endl;
    cout<<"1. area of square "<<endl;
    cout<<"2. area of rectangle "<<endl;
    cout<<"3. area of circle "<<endl;

    cout<<"Enter the choice(1-3): "<<endl;
    cin>>choice;

    switch (choice){

        case 1:
        cout<<"For area of square ! "<<endl;
        cout<<"enter the measurement of side of square: "<<endl;
        cin>>S;

        cout<<"Area of square is: "<<S*S<<endl;
        break;

        case 2:
        cout<<"For area of rectangle: "<<endl;
        cout<<"Enter the length: "<<endl;
        cin>>L;
        cout<<"Enter breadth of rectangle: "<<endl;
        cin>>B;
        cout<<"Enter height of rectangle: "<<endl;
        cin>>H;

        cout<<"Area of rectangle is: "<<L*B*H<<endl;
        break;

        case 3:
        cout<<"Area of circle ! "<<endl;
        cout<<"Enter radius of circle: "<<endl;
        cin>>R;

        cout<<"Area of circle: "<<3.14*R*R<<endl;
        break;

        default: 
        cout<<"invalid input !"<<endl;
        break;
    }
    return 0;

}