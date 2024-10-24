// There are two types of header files
// 1.system header  file.it will come with compiler
#include<iostream>
// 2.user defined header file.it is written by compiler
//#include<this.h>  //--->This will produce an errror if this.h isnot present in current directory

using namespace std;

int main() {
    int a = 2, b = 4; 

    cout << "Operators in C++:" << endl;
    cout << "Following are the types of operators in C++:" << endl;

    // Arithmetic operators
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl; 
    
    cout << "The value of a-- is " << a-- << endl; 
    
    cout << "The value of ++a is " << ++a << endl; 
    cout << "The value of --a is " << --a << endl;
   cout<<endl;

    //Assingment operators -->used to assign value to variable
   // int a =3, b =4;
    //char d ='d' 

//Comperison operators
    cout << "Following are the  comperison operators in C++:" << endl;
    cout << "The value of a == b is " <<(a == b) << endl;
    cout << "The value of a != b is " <<(a!=b) << endl;
    cout << "The value of a <= b is " <<(a <= b) << endl;
    cout << "The value of a >=b is " <<(a>=b) << endl;
    cout << "The value of a < b is " <<(a<b)  << endl;
    cout << "The value of a > b is " << (a>b) << endl;

    //logical operators
    cout << "Following are the logical operators in C++:" << endl;
    cout << "The value of this logical and operator ((a == b) && (a<b))  is :" <<((a == b) && (a<b))<< endl;
    cout << "The value of this logical or operator ((a == b) || (a<b))  is :" <<((a == b) || (a<b))<< endl;
    cout << "The value of this logical not operator (!(a == b)) is :" <<(!(a == b))<< endl;
    return 0;
}