#include<bits/stdc++.h>
#include<iostream>
#include<cctype>
using namespace std;


int main(){

string s1,s2,ans ="";
cin>>s1>>s2;
int sz = s1.length();
int sz2 = s2.length();
int j=0;

    for(int i=sz-1; i>=0; i--){
    if(s1[i]==s2[j]&& sz == sz2){
        ans ="YES";
    }
    else{
        ans = "NO";
        break;
    }
    j++;
    }
    cout<<ans<<endl;


return 0;
}


