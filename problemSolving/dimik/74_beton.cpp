#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main(){
    map<string, int>m;
    map<string, int>::iterator it;
    string s;
    int a,m2,n;
    cin>>m2;
     cin>>n;
    while(m2--){
    cin>>s>>a;
    m.insert(make_pair(s,a));
    }
    
  for(it=m.begin(); it!= m.end(); it++){
        cout<<it->first<<"-"<<it->second<<endl;
    }
 string str2;
    for(int i=0; i<=n; i++){
        
       getline(cin,str2);
    
    stringstream ss(str2);
    string word;
    int sum = 0;
    while(ss>>word){
        for(it = m.begin(); it!=m.end(); it++){
       if(word == it->first){
           sum +=it->second;
       }
    }
    }
    cout<<sum<<endl;
    sum =0;
}
    
}
