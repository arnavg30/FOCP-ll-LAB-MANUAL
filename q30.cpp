/*A weather monitoring app records 30-day temperature logs. Implement a solution to store daily
temperatures in an array and display the minimum temperature for the month.*/
#include<iostream>
using namespace std;


   int main(){
    int min;
    int a[30];

     cout<<"enter the value of index 0 "<<endl;
    cin>>a[0];
min=a[0];


   for(int i=1;i<30;i++){
cout<<"enter the value of index "<<i<<endl;

    cin>>a[i];

    if(a[i]<min){
        min=a[i];
    }

    }
cout<<"the min value is "<<min;



    return 0;
}