#include<iostream>
using namespace std;
int main(){
    int i,num=1,n;

    cout<<"enter any number of factorial:";

    cin>>n;

    for(int i=1; i<=n; i++)
    {
       num = num*i;
    }
    cout<<"factorial of "<<n<<"is :"<<num<<endl;
    return 0;

 }
    

    

       