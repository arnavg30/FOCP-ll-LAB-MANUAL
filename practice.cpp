#include<iostream>
#include<string>

using namespace std;

int main(){
   string s;
   int vc=0 , cc =0 , nc=0 , l;

   cout<<"enter the string "<<endl;

   getline(cin,s);
   l = s.length();
   for(int i=0 ; i<l ; i++){
if (s[i]>='0' &&s[i]<='9'){

    nc++;
}
      else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
   
    vc++;
   
    }
    else if (s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z'){
        cc++;
    }
}
cout<<"the number of no. is "<<nc<<" the no. of vowels is "<<vc<<" the no. of consonent is "<<cc;
    return 0;
}
