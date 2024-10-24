#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
    system("cls"); 
system("Color 0A");

    for(int i=0; i<=10; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}