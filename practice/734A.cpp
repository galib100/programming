#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    long long n,cA=0,cD=0;
    string str;
    cin>>n>>str;


    for(int i=0; i<n; i++){

        if(str[i]=='A'){
            cA++;
        }
        else cD++;
    }

    if(cA>cD){
        cout<<"Anton"<<endl;
    }
    else if(cA<cD){cout<<"Danik"<<endl;}
    else{
        cout<<"Friendship"<<endl;
    }

}

