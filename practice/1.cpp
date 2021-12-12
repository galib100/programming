#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<i<<"--th into j loop "<<j<<endl;
        }
        cout<<"that's into i lp "<<i<<endl;
    }
}