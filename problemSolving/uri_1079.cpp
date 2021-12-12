#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){ 
  int i,n;
  float a,b,c,s;
   cin>>n;
   for(i=0; i<n; i++){
       cin>>a>>b>>c;
       s = a*0.2+ b*0.3+ c*.5;
   printf("%.1f\n",s);
   }
   
    return 0;
   }
