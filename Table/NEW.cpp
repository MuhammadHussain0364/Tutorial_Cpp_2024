#include <iostream>
using namespace std;
int main()
{
    int TableNo, choice ;
    cout << "Enter your number" ;
    cin >> TableNo ;

    cout << "Enter number for limit to multiply" << endl  ;
    cin >> choice ;

    for (int i; i <= choice; i++)
    {
        cout << TableNo << " x " << i << " = " << i * TableNo << endl;
    }
}