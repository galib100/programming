#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
  priority_queue<string> p;
  p.push("s10");
  p.push("g100");
  p.push("a1");
  p.push("c200");
  p.push("b");
//priority_queue<int>p;
//p.push(1000);
//p.push(100014);
//p.push(544);

while(!p.empty()){
    cout<<p.top()<<endl;

    p.pop();///delete the element from queue

}

}
