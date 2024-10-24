#include<iostream>
using namespace std;
int main(){
    int tableNo;
    cout<<"Enter your number \n" ;
    cin>>tableNo;
    cout<<endl;
    for(int i=1; i<=100; i++)
    {
        cout<<tableNo<<" x "<<i<<" = "<<i*tableNo<<endl;
    }

    return 0 ;
 }
    
     

