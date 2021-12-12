#include<iostream>
#include<cctype>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s1;
   string s2;
   cin>>s1>>s2;
     if(s1<s2){
         cout<<" s1 is less than s2"<<endl;
     }
     else if(s1>s2){
         cout<<" s1 is greater than s2"<<endl;
     }
     else{
         cout<<"can't test"<<endl;
     }
    
    return 0;
}