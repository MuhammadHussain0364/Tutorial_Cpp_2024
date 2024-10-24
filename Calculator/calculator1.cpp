#include<iostream>
using namespace std;
int main(){
    int a , b , mode; 

    cout<<"enter the value of a  : \a";
    cin>> a ;

    cout<<"enter the value of b  :\a ";
    cin>> b ;

    cout<<"Please Press 1 for Addition\nPlease press 2 for Multipy\nPlease press 3 for divition\nPlease press 4 for subtract\n";
    cin>>mode;

    if (mode==1)
    {
        cout<<a+b;
    }

    else if (mode==2)
    {
        cout<<a*b;
    }

    else if(mode==3)
    {
        cout<<a/b;
    }

    else if(mode==4)
    {
        cout<<a-b;
    }

}