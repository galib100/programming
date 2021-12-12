#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<utility>
using namespace std;
int main(){
//     vector<pair<string,int>>vec;
//    vector<pair<string,int>>:: iterator it;
//     vec.push_back( make_pair("galib",51));
//     vec.push_back( make_pair("abir",55));
  
//     for(it = vec.begin(); it!=vec.end(); it++){
//         cout<<it->first<<" - "<<it->second<<endl;
//     }
// practice****
vector<pair<int,string>>vec;
vector<pair<int,string>>::iterator it;
string str;
int a;
cin>>str;
cin>>a;
vec.push_back( make_pair(a,str));
    for(it =vec.begin(); it!= vec.end(); it++){
        cout<<it->second<<"-"<<it->first<<endl;
    }
    

}