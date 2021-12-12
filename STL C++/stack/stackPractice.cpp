#include<bits/stdc++.h>
using namespace std;
/*this program is going about the stack
also show here the diff btwn the stack and queue
*/
int main(){
//stack<int> st1;
queue<int>st1;
st1.push(20);
st1.push(50);
st1.push(40);
st1.push(44);
st1.push(3);
while(!st1.empty()){
//    cout<<st1.top()<<"\t ";/// for the stack it is top fuc
    cout<<st1.front()<<"\t ";///for the queue it is front  fuc
    st1.pop();
}

}
