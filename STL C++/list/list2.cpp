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
    int arr[5]={3,6,2,8,5};
    list<int>mylist(arr,arr+5);
   cout<<mylist.front()<<endl;//first element of list
   cout<<mylist.back()<<endl;//last element of list should be 5;

   
    return 0;
}