/*A game compares three players' scores to find who is ahead. Implement a solution to accept three scores
and identify the winner*/
#include<iostream>
using namespace std;

int main(){
   int a,b,c,z,s;

   cout<<"enter the value of three no. a,b,c "<<endl;
   cin>>a>>b>>c;

   z= max(a,b);
s = max(c,b);
cout<<"the max value is "<<max(z,s);

    return 0;
}