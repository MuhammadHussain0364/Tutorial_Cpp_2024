#include<iostream>
using namespace std;
int main(){

    float height, weight, bmi;
    

    cout<<"enter  height in meters:  ";
    cin>>height;

    cout<<"enter  weight in kilograms:  ";
    cin>>weight;


    bmi= weight / (height*height);

    if (bmi < 18)
    cout<< "underweight";

    else if (bmi < 25)
    cout<< "normalweight";

    else if (bmi < 30)
    cout<< "overweight";

    else
    cout<< "obese";

    cout<<"BMI: "<<bmi<<endl;
   
    return 0;

}