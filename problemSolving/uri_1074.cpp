#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){ 
  int i,n,a;
  cin>>n;
  for(i=1; i<=n; i++){
cin>>a;
    if(a%2 == 0 ){
        if(a>0){
        cout<<"EVEN POSITIVE"<<endl;
         }
         else if (a<0){
        cout<<"EVEN NEGATIVE"<<endl;
             
         }
         else
         cout<<"NULL"<<endl;
    }
else {
    if(a>0){
        cout<<"ODD POSITIVE"<<endl;
         }
         else{
        cout<<"ODD NEGATIVE"<<endl;
         }
}
    
    
  }
    return 0;
   }
