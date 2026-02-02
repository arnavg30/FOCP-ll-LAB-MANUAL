/*The school report card system stores subject marks for each student.
Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result*/
#include<iostream>
using namespace std;

int main(){
   int total =0;
   int m[5];
   float per;
   for(int i=0 ; i<5; i++){
    cout<<"enter the marks for subject "<<i+1<<endl;
    cin>>m[i];

total+=m[i];
   }
   per = (total*100)/500;

   cout<<"the total marks are "<<total<<endl;
   cout<<"the percentage marks are "<<per<<endl;

    return 0;
}