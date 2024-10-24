#include<iostream>
using namespace std;
int main(){
int pin=0, amount=0, choice=0, withdraw=0, balance=1000 ;

cout<<"Enter your pin ";
cin>>pin ;

if (pin==222)
{
    cout<<"welcome correct pin ";
    cout<<"Press 1 for withdraw amount\n, Press 2 for your current amount\n ";
    cin>>choice;


    if(choice==1)
    {
        cout<<"Enter your amount ";
        cin>>amount;
        
        if(amount<=balance)
        {
         cout<<"Withdraw Amount is = "<<amount<<endl;
         cout<<"Your Remaining Amount = > "<< balance -amount<<endl;
        }
        
        else
        {
            cout<<"you have no this amount "<<balance<<endl ;
        }

    }
}
 else if (choice==2)
        {
            cout<<"your current amount "<<balance<<endl ;
        }


    else 
    {
            cout<<"incorrect pin ";
        }

        return 0 ;
}


