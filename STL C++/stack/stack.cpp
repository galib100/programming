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
   
   stack<string>s;
//    stack dosn't have an iterator !important
   s.push("galib");
   s.push("banna");
   s.push("monira");
   while(!s.empty()){
       string x;
       x=s.top();
cout<<x<<endl;
 s.pop();
   }
  
   
}