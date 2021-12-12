#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,l;
    cin>>t;
    for(int i=0; i<t; i++){
        string str;
        cin>>str;
        l = str.length();
    if(l>10){
cout<<str[0]<<l-2<<str[l-1]<<endl;
    }
    else{
        cout<<str<<endl;
    }    
  }
    return 0;
}