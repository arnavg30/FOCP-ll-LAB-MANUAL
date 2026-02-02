/*A data processing system classifies even and odd inputs separately. Implement a solution to
store 5 elements in an array, compute sum of all even and sum of all odd numbers.*/

#include<iostream>
using namespace std;

int main(){
   int a[5];
int even=0 , odd=0;
for(int i=0 ; i<5 ; i++){
    cout<<"enter the value for index "<<i<<endl;
    cin>>a[i];
}
   for(int i=0 ; i<5 ; i++){

if(a[i]%2==0){

    even+=a[i];

}
else{
    odd+=a[i];
}


   }
   cout<<"the sum of even terms is "<<even<<endl;
cout<<"the sum of odd terms is "<<odd<<endl;
    return 0;
}