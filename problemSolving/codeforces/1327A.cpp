#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,k,sum=0;
cin>>n;
for(int i=1; i<=n; i=i+2){
// cout<<i<<endl;
int tem = i;
for(int j=1; j<=n; j=+2)
{
     sum = tem + j;
     if(sum == n){
         cout<<"yes"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }
     sum =0;
}
}

}