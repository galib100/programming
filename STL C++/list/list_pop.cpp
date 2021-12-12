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
    int arr[5]={4,2,5,1,3};
  list<int>mylist(arr,arr+5);
   list<int>::iterator it;
   mylist.pop_front();
   mylist.pop_back();
   mylist.pop_front();
    // if(mylist.empty()){
    //     cout<<"Empty"<<endl;
    // }
    // else{
    //     cout<<"Filled"<<endl;
    // }

    for(it=mylist.begin(); it!=mylist.end();it++){
        cout<<*it<<"\t";
    }
    cout<<endl;

  
}