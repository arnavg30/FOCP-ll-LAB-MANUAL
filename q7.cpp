/*An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker.
Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and
display results.*/

#include<iostream>
using namespace std;

int main(){
   int n,bs,b,bns,t,ns;
   cout<<"enter the no. of employees \n";
cin>>n;

cout<<"enter the salary of employees \n";
cin>>bs;
 
bns=n*bs;
 t= (12*bns)/100;
 b=t*n;
ns=b+bns;
cout<<"the basic salary is "<<bns<<endl;
cout<<"the net bonus is "<<b<<endl;
cout<<"the net salary is "<<ns;

    return 0;
}