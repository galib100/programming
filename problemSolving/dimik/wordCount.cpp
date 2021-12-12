#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
     int t,c=0;
     char  s[10000];
      cin>>t;
     while(t--){

     getline(cin,s);
cout<<s.size();

     for(int i=0; i<s.size(); i++){

        if(s[i] ==' '|| s[i]=='\t' || s[i]=='\n'){
            ++c;
        }
     }
     cout<<"Count = "<<c<<endl;
     c =0;
 }
 return 0;
}
