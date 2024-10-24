#include<iostream>
using namespace std;
int main(){
    int firsttime;

    cout<<"Enter Current time \n";
    cin>>firsttime;

    if(firsttime >= 5 && firsttime <= 6)
    {
        cout<<"fajar";
    }
    else if (firsttime >= 12 && firsttime <= 14)
    {
        cout<<"zohar";
    }
    else if (firsttime>=16 && firsttime<=17)
    {
        cout<<"asar";
    }
    else if(firsttime>=17 && firsttime<18)
    {
        cout<<"maghrib";
    }
    else if(firsttime>=19 && firsttime<20)
    {
        cout<<"isha";
    }
    else
    {
        cout<<"no time";
    }
   return 0; 
}
