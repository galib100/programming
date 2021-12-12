#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[99],tem;
    long long c=0;
    cin>>s;
    long long size =  strlen(s);
    for(int i =0; i<size; i++){
        if(s[i]>='a'&& s[i]<='z'){
             tem = s[i];
        }
        
        for(int j=i+1; j<size; j++){
            if(tem == s[j]){
                c++;
               s[j]=' ';
            }
        }        
    }
    if((size-c)%2==0){cout<<"CHAT WITH HER!"<<endl;}
    else
cout<<"IGNORE HIM!"<<endl;
return 0;
}
