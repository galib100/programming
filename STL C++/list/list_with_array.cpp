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
    int ar [5] = {32,3,5,6,30};
    list<int>mylist(ar,ar+5);
    list<int>::iterator it;
    // cout<<mylist.size()<<endl;//find the size of list;
  it= find(mylist.begin(),mylist.end(),3);//here 4 not found,that's why poin mylist.end();
    mylist.erase(it);//to erase the pointing iterator
   
//   if(it == mylist.end()){
//       cout<<" !!~Not Found~!!"<<endl;
//   }
//   else
//   {
//       cout<<"Found !!!"<<endl;
//       cout<<"iterator is: "<<*it<<endl;
//   }
 
//  mylist.insert(it,2);  //insert_function to insert 
    // print_the_list
    for(it = mylist.begin(); it!=mylist.end();it++){
        cout<<*it<<endl;
    }
    //cout<<"\n size of list:"<<mylist.size();
}