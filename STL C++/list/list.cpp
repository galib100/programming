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
list<float> mylist;
list<float>::iterator it;
mylist.push_back(10);
mylist.push_back(20);
mylist.push_back(25);
mylist.push_back(15);
mylist.push_front(5);
cout<<"size:___"<<mylist.size()<<endl; //to find the size
 

  mylist.reverse();
 mylist.empty();
 mylist.clear();
 cout<<"after clearing size = "<<mylist.size()<<endl;
for(it=mylist.begin(); it!=mylist.end(); it++){
    cout<<*it<<" ";

}

return 0;
}
