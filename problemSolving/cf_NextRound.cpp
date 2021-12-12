#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a[100],tem=0;
    cin>>n;
    cin>>k;
    for(int i=1; i<=n; i++){
      cin>>a[i];
    
    }
    for(int j=1; j<=n; j++){
     if(a[j]>=a[k] && a[j]>0){
        tem++;
    }
    }
   
    cout<<tem<<endl;
    return 0;
}