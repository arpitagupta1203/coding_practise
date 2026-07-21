// Restaurant menu bill generator.

#include<iostream>
using namespace std;
int main(){

    int qty,rate=0;
    string item;
    int choice;

    do{
        cout<<"--- Menu ---"<<endl;
        cout<<"1. idli              Rs.30"<<endl;
        cout<<"2. sambhar           Rs.30"<<endl;
        cout<<"3. Dosa              Rs.30"<<endl;
        cout<<"4. vada pav          Rs.30"<<endl;
        cout<<"5. spring roll       Rs.30"<<endl;
        cout<<"6. bruger            Rs.30"<<endl;
        cout<<"7. bill"<<endl;

        cout<<"Enter the choice: "<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"Enter qty of idli you want: "<<endl;
            cin>>qty;
            rate = rate+qty*30;
            break;

            case 2:
            cout<<"Enter the quantity of sambhar: "<<endl;
            cin>>qty;
            rate = rate+qty*40;
            break;

            
            case 3:
            cout<<"Enter the quantity of dosa: "<<endl;
            cin>>qty;
            rate = rate+qty*80;
            break;

            
            case 4:
            cout<<"Enter the quantity of Vada pav: "<<endl;
            cin>>qty;
            rate = rate+qty*40;
            break;

            
            case 5:
            cout<<"Enter the quantity of spring roll: "<<endl;
            cin>>qty;
            rate = rate+qty*40;
            break;

            
            case 6:
            cout<<"Enter the quantity of burger: "<<endl;
            cin>>qty;
            rate = rate + qty * 50;
            break;

            
            case 7:
            cout<<"your total bill is: "<<rate<<endl;

            default:
            cout<<"Thank you! hope u will love the food"<<endl;
            break;

        }
    }
    while(choice !=7);
    return 0;
}