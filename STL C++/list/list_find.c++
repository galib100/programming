#include<stdio.h>
#include<iostream>
#include<string>
#include<iterator>
#include<vector>
#include<queue>
#include<algorithm>
#include<list>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr [7]= {2,3,23,24,26,4,7};
    list<int>mlist(arr,arr+ 7);
     list<int>::iterator it;
    it = find(mlist.begin(),mlist.end(),4);
//    mlist.erase(it);
     mlist.insert(it,25);
     mlist.clear();
    for(it=mlist.begin(); it!= mlist.end(); it++){
       cout<< *it<<"\t";
    }
   
}
