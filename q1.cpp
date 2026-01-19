#include<iostream>
using namespace std;

int main(){
   int a,b,c,sum;
  float avg;

cout<<"enter marks for subject 1"<<endl;
cin>>a;

cout<<"enter marks for subject 2"<<endl;
cin>>b;
cout<<"enter marks for subject 3"<<endl;
cin>>c;
  
sum=a+b+c;
avg = sum/3;
cout<<"total is " << sum<<endl;
cout<<"avearge is " << avg;


    return 0;
}