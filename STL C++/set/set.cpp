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
    set<int>s;
    set<int>::iterator it;
    s.insert(3);
    s.insert(5);
    s.insert(10);
  
    for( it=s.begin(); it!=s.end(); it++){
        cout<<*it<<endl;
    }
}