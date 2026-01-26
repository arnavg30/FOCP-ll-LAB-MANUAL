/*A student wants to swap the values of two variables for practising coding basics.
Implement a solution to swap two numbers using different techniques.*/
#include<iostream>
using namespace std;

int main(){
   
    int a,b,c;

    cout<<"enter the value of a and b \n";
    cin>>a>>b;

    c=a;
    a=b;
    b=c;
    cout<<"the new values of a and b are "<<a<<" and "<<b;


    return 0;
}