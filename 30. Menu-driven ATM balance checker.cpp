//Create a menu-driven ATM balance checker

#include<iostream>
using namespace std;
int main(){
    int choice;
    float balance,amount;
    balance=10000;

    do{
        cout<<"1. check balance"<<endl;
        cout<<"2. add amount"<<endl;
        cout<<"3. withdraw money"<<endl;
        cout<<"4.  Exit"<<endl;
        cout<<"Enter the choice(1-4): "<<endl;
        cin>>choice;

        switch(choice){
            //check balance
            case 1:
            cout<<"Your balance is: "<<balance<<endl;
        break;

            //add amount
            case 2:
            cout<<"Enter the amount you want to add: "<<endl;
            cin>>amount;
            if(amount > 0){
                balance = balance + amount;
                cout<<"Now, Your balance is: "<<balance<<endl;
            }
            else{
                cout<<"invalid "<<endl;
            }
            break;

            // withdraw amount

            case 3:
            cout<<"Enter the amount to be withdrawn: "<<endl;
            cin>>amount;

            if(amount == 0){
                cout<<"invalid ! "<<endl;
            }

            else if(balance >= amount){
                balance=balance-amount;
                cout<<"your balance after withdrawn is: "<<balance<<endl;
            }
            
            else{
                cout<<"Insufficient balance!"<<endl;
            }
            
            break;

            //exit
            case 4:
            cout<<"thank you! have a good day! "<<endl;
            break;

            default:
            cout<<"Invalid input! "<<endl;
            break;
            }
        }
        while(choice !=4);
    return 0;
}