#include <iostream>
using namespace std;
int main()
{
    int pin = 0, amount = 0, choice = 0, withdraw = 0, balance = 100000;

    cout << "Enter your pin " << endl;
    cin >> pin;

    if (pin == 1234)
    {
        cout << "welcome correct pin" << endl;
        cout << "Press 1 for withdraw amount\nPress 2 for your current amount\\n"
             << endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter your amount" << endl;
            cin >> amount;

            if (amount <= balance)
            {
                cout << "withdraw amount is :" << amount << endl;
                cout << "remaining amount is :" << balance - amount << endl;
            }
            else
        {
            cout << "you dont have this amount :" << amount << endl;
        }

        }
        
        else if (choice == 2)
    {
        cout << "your current amount is " << balance << endl;
    }
    }

    else
    {
        cout << "Incorrect pin";
    }

    return 0;
}
