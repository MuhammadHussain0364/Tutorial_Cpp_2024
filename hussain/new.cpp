#include<iostream>
using namespace std;
int main(){
    int pin=0, amount=0, choice=0, withdraw=0, balance=1000;

    cout<<"Enter your pin ";
    cin>>pin ;
    
    if(pin==123)
    {
        cout<<"welcome correct pin  :" ;
        cout<<"Press 1 to withdraw amount\nPress 2 for your current amount\n ";
        cin>>choice;

    if(choice==1)
    {
    cout<<"enter your amount" ;
    cin>>amount ;

    if(amount<=balance)
    {
      cout<<"withdraw amount is = " <<amount<<endl ;
        cout<<"Remaining amount is => "<<balance - amount<<endl ;  
    }
       
    }
        else
        {
            cout<<"you have no this amount "<<balance<<endl ;
        }
     }

     else if(choice==2)
     {
        cout<<"your current amount is "<<balance<<endl ;
     }

     else
     {
        cout<<"incorrect pin" ;
     }

     return 0;
}