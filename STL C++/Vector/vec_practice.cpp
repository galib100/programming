#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<bits/stdc++.h>
using namespace std;
bool fuc(int a, int b){ //this function is used(sort(3rd)) to reverse vec;
    return (a>b);
}
int main(){
    vector<int>vec;
    vector<int>::iterator it;
    // for(int i=0; i<10; i++){
        vec.push_back(10);
        vec.push_back(33);
        vec.push_back(2);
        vec.push_back(5);
        vec.push_back(8);

    // }
    sort(vec.begin(),vec.end());

    for(it = vec.end(); it!=vec.begin(); --it){
        cout<<*it<<endl;
    }
}