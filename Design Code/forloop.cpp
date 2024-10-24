#include<iostream>
#include <windows.h>  

using namespace std ;

int main()
{

system("cls"); 
 system("Color 0A"); 

for(int i=0; i<=10; i++)    //i=1
{
    for(int j=0; j<=i; j++)// true j= 0 j =1
    {
        cout<<"*"; //*
        //**
    }
    cout<<endl ;
}
return 0;

}