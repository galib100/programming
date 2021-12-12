#include<bits/stdc++.h>
#include<iostream>
#include<cctype>
using namespace std;


int main(){

string s;
int uc=0,lc=0;
cin>>s;
int sz = s.length();
for(int i=0; i<sz; i++){
   if(s[i]>='a' && s[i]<='z'){
   lc++;
   }
   else{
    uc++;
   }
}
if(uc>lc){
    for(int i=0; i<sz; i++){
       s[i] =toupper(s[i]);
    }
    cout<<s<<endl;
}
else{
for(int i=0; i<sz; i++){
       s[i] =tolower(s[i]);
    }
    cout<<s<<endl;
}

return 0;
}

