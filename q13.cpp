/*A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a
solution to calculate the roots of a quadratic equation*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
   int a,b,c;
float d,r1,r2;
   cout<<"enter the value of a,b,c in ax^2+bx+c \n";
   cin>>a>>b>>c;

d= sqrt((b*b)-4*a*c);

r1= (-b-d)/(2*a);
r2= (-b+d)/(2*a);

cout<<"the roots of equation are "<<r1<<" and "<<r2;



    return 0;
}