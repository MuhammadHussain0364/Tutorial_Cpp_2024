#include <iostream>
using namespace std;

int main() {
    int pin, amount,choice, balance = 1000; 

    cout<< "Enter your ATM pin: ";
    cin>> pin;

    cout<< "Enter the amount to withdraw: ";
    cin>> amount;

    cout<< "Please enter 1 to withdraw amount\n, Please enter 2 to check remaining amount\n";
    
    cin>> choice;

    
    if (amount <= balance) 
    {
      cout<< Withdraw ;
    }

    else if(amount > balance)
    {
       cout<< Insufficient ;
    }
    
    
     else
      {
        cout<< "Invalid " ;
    }

    return 0;
}
