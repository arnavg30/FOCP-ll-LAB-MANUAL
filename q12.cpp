/*A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to
check the triangle type based on its sides.*/

#include<iostream>
using namespace std;

int main(){
   int a,b,c;
   cout<<"enter the three sides of the triangle \n";
   cin>>a>>b>>c;

   if(a==b && b==c && c==a){
    cout<<"it is an equilateral triangle \n";

   }

   else if(a==b || b==c || c==a){
    cout<<"it is a isosceles triangle \n";
   }
   else{
    cout<<"it is a scalene triangle ";
   }

    return 0;
}