/*A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase.
Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.*/
#include<iostream>
using namespace std;

int main(){
   int sum,t, i,q,u; 
cout<<"enter the value of ITEM NO. , QUANTITY , UNIT PRICE \n";
cin>>i>>q>>u;

sum= q*u;

t = sum*0.8;
cout<<"Net total after discount is "<<t;

    return 0;
}