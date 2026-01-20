/*A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to
convert Fahrenheit temperature into Centigrade or vice versa*/

#include<iostream>
using namespace std;

int main(){
   
    int o;
    float c,f;
    cout<<"enter your choice\n";
    cout<<"1. for C-F and 2. for F-C\n";
cin>>o;
if(o==1){
cout<<"enter the temperature in celcius\n";
cin>>c;
f=(c*9)/5 + 32;
cout<<"the temperature in fahernite is "<<f;
    
}
else if (o==2){
    cout<<"enter the temperature in fahrenite\n";
cin>>f;
c=((f-32)*5)/9;
cout<<"the temperature in fahernite is "<<c;

}
else{
    cout<<"invalid";

}
    return 0;
}