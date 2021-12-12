#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<utility>
#include<bits/stdc++.h>
using namespace std;
int main(){
//   pair<string,int>p;
//   p = make_pair("galib",34); 
//   cout<<p.first<<" "<<p.second<<endl;
///vector_with_pair

vector< pair<int,string> >v;
vector< pair<int,string>>::iterator it;
v.push_back(make_pair(2,"nabil"));
v.push_back(make_pair(20,"afif"));
v.push_back(make_pair(34,"dgdf"));
for(it=v.begin();it!=v.end();it++){
    cout<<it->first<<"-";
cout<<it->second<<endl;
  
}

return 0 ;
}