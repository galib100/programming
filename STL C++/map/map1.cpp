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
#include<bits/stdc++.h>
using namespace std;
int main(){
  map<string,int>m;
  map<string,int>::iterator it;
m.insert(make_pair("galib",33));
  m["banna"]=234;
  m["abdul aziz"]=12;
  m["musanna"]=52;

for(it = m.begin(); it!=m.end(); it++)
{
     cout<<it->first<<"-"<<it->second<<endl;
}
   

 
return 0 ;
}