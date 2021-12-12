#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int j=0;j<n; j++){
            if(a[j]!=a[j+1]){
                a[j]=a[j]+a[j+1];
                // for(int k=0; k<n-1; k++){
                //     a[k+1]=a[k+2];
                // }

            }
        }
        // int size = sizeof(a)/sizeof(a[0]);
        // cout<<size<<endl;
        for(int m=0; a[m]!=0; m++){
            cout<<a[m]<<" ";
        }
    }
    
}
