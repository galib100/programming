#include<stdio.h>
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
showVector(){
for(int i=0; i<vec.size();i++){
     cout<<vec[i]<<endl;
     }
 return 0;   
}
int main(){
     // vector<int>vec;
     vec.push_back(4);
     vec.push_back(5);
     vec.push_back(3);
     vec.push_back(8);
     showVector();
     vec.erase(vec.begin());
cout<<"after erasing:"<<endl;
     showVector();
     // cout<<vec.begin()<<endl;


}
 