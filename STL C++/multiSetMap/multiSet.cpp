#include<stdio.h>
#include<iostream>
#include<map>
#include<set>
#include<iterator>
#include<bits/stdc++.h>
using namespace std;
int main(){
     multiset<int> ms;
     multiset<int>::iterator it ;

     ms.insert(4);
     ms.insert(4);
     ms.insert(7);
     ms.insert(4);
     ms.insert(3);
//    ms.erase(7);
     for( it=ms.begin(); it!=ms.end(); ++it){
         cout<<*it<<endl;
     }

}
