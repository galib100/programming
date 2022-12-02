#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,c1,tp=0;
    cin>>n;
    for(int i=0; i<n; i++){
        c1=0;
        for(int j=1;j<=3; j++){
            cin>>l;
            if(l==1){
                c1++;
            }
        }
        if(c1>1){
            tp++;
        }
    }
   cout<<tp<<endl;
    return 0;
}