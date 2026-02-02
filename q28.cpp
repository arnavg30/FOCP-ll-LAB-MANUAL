/*A supermarket software maintains item price lists. Implement a solution to store the prices of 10
items in an array and display the maximum price*/

#include<iostream>
using namespace std;

int main(){
    int max;
    int a[10];

     cout<<"enter the value of index 0 "<<endl;
    cin>>a[0];
max=a[0];


   for(int i=1;i<10;i++){
cout<<"enter the value of index "<<i<<endl;

    cin>>a[i];

    if(a[i]>max){
        max=a[i];
    }

    }
cout<<"the max value is "<<max;


    return 0;
}