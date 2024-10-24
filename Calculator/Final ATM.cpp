#include<iostream>
using namespace std ;
int main(){
    int pin=0, amount=0, insufficient=0, withdraw=0, choice = 0, balance=2000 ;

    cout<<"Enter your pin ";
    cin>>pin ;



    if (pin==123)
    {
        cout<<"welcome correct pin \n";
    
        cout<<"Press 1 to withdraw amount\nPress 2 For Your Current Amount\n" ;
        cin>>choice;
        
        if (choice == 1)
        {
            cout<<"Enter your amount ";
            cin>>amount;
            if(amount <= balance)
            {
                cout<<"Withdraw Amount is = "<<amount<endl;
                cout<<"Your Remaining Amount = > "<< balance -amount<<endl;
            }
            else
            {
                cout<<"you dont have this amount \n";
            }
        }

        else if (choice == 2)
        {
            cout<<"Your Current Amount => "<<balance<<endl;
        }
    }
    else
    {
      cout<<" incorrect pin:";   
    }

    return 0;
}