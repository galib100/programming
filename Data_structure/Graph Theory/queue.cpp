#include<bits/stdc++.h>
using namespace std;


int main(){
 queue<int>q;
 q.push(1);
 q.push(10);
 q.push(20);
 q.push(30);
 q.push(40);
 cout<<"size : "<<q.size();


 while(!q.empty()){
    int x = q.front();
    cout<<x <<endl;
    q.pop();
 }
}
