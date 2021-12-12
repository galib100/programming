#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main(){
    map<string, int>m;
    map<string, int>::iterator it;
    string s;
    int a,i=3;
    while(i--){
    cin>>s;
    cin>>a;
    m.insert(make_pair(s,a));
    }
    
    for(it = m.begin(); it!=m.end(); it++){
        cout<<it->first<<"->"<<it->second<<endl;
    }
}
