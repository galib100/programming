#include<iostream>
#include<vector>
#include<stdio.h>
#include<iterator>
#include<bits/stdc++.h>

using namespace std;
int main(){ 
    int a;
  vector<int> v;
  vector<int>::iterator it;
  for(int i=0; i<3; i++){
      cin>>a;
      v.push_back(a);
  }
  it =v.begin();
  v.sort(it);
 for(it=v.begin(); it!=v.end();it++){
     cout<<*it<<endl;
 }
  
return 0;
  }
  
