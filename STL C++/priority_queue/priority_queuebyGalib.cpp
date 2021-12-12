#include<bits/stdc++.h>
#include<queue>
#include<iostream>
using namespace std;
int main(){
 /*priority_queue<int> pq;
pq.push(600);
pq.push(65);
pq.push(64);
pq.push(76);
pq.push(66);


*/
priority_queue<string>name;
name.push("abu");
name.push("Abu");
name.push("bappi");
name.push("Bappi");
name.push("Galib");
name.push("Musa");
while(!name.empty()){
    cout<<name.top()<<"\t";
    name.pop();
}
//while(!pq.empty()){
//   cout<< pq.top()<<"\t";
//   pq.pop();
//}

}
