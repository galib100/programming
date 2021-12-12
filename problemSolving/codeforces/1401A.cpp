#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,b;
    int step =0;
    cin>>t;
    for(int i=0; i<t; i++){
         cin>>n>>k;
         
         if(n>k){
              b=0.5*(k+n);
             for(int j=n; j>b; j--){
                    step++;
             }
         }
         else{
             for(int a=n;a<k; a++){
              step++;   
             }

         }
         cout<<step<<endl;
         step =0;
    }
    return 0;
}