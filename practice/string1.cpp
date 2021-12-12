#include<iostream>
#include<cctype>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[999];
    cin>>str;
   str[0]= toupper(str[0]);
   cout<<str<<endl;
   return 0;    
}