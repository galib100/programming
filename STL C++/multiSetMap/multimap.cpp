#include<stdio.h>
#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<string,int> mm;
 multimap <string,int>:: iterator it;
 mm.insert(make_pair("galib",44));
 mm.insert(make_pair("galib",434));
 mm.insert(make_pair("tajkeya",414));
    
for(it = mm.begin(); it!=mm.end(); it++)
{
    cout<<it->first<<" "<<it->second<<endl;
}    

}
