#include<iostream>
using namespace std;
int main(){

    int pin, choice, amount, balance=1000;

    cout<<"enter your ATM pin :" ;
    cin>>pin;

    cout<<"enter your amount thats withdraw  :" ;
    cin>>amount;

    cout<<"please enter 1 for withdraw amount \n Please enter 2 for check remaining amount\n";
    cin>>choice;

    if (amount<=balance)
    {
        cout<<withdraw ;
    }
else if(amount>balance)
{
    cout<<insufficient  balance ;
}
    else
    {
        cout<<"no money :" ;
    }

    return 0;

}