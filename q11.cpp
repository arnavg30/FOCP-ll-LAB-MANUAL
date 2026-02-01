/*A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total
expenses and apply a discount accordingly*/

#include<iostream>
using namespace std;

int main(){
  long int n,p,b;
double sum;
   cout<<"enter the number of items \n";
   cin>>n;

   cout<<"enter the price of each item \n";
   cin>>p;

   b=n*p;
   if(n>1000){

    sum= b*0.9;
cout<<sum;
}
else{
    cout<<b;
}

    return 0;
}