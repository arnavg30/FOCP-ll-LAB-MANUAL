/*A data analytics tool finds the maximum sales figure from multiple entries.
Implement a solution to accept ‘n’ numbers and display the largest.*/
#include<iostream>
using namespace std;

int main(){
    int n,max;
    cout<<"enter the number of entery \n";
    cin>>n;
    int a[n];
    cout<<"enter the value of index 0 "<<endl;
    cin>>a[0];
max=a[0];


    for(int i=1;i<n;i++){
cout<<"enter the value of index "<<i<<endl;

    cin>>a[i];

    if(a[i]>max){
        max=a[i];
    }

    }
cout<<"the max value is "<<max;

return 0;
}