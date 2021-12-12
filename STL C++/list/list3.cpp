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
    int a[5]= {2,35,6,23,10};
    list<int>mylist(a,a+5);
    list<int>::iterator it;
    // mylist.sort();
    // mylist.reverse();
   it = find(mylist.begin(),mylist.end(),23);
    // mylist.erase(it);
    it++;
    mylist.insert(it,24);
    for(it=mylist.begin(); it!=mylist.end(); it++){
        cout<<*it<<"\t";
    }


}