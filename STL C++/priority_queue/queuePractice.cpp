#include<bits/stdc++.h>
using namespace std;

int main(){
queue<int> qu;
qu.push(10);
qu.push(20);
qu.push(300);
qu.push(300);
qu.push(140);

while(!qu.empty()){
    cout<<qu.front()<< "\t ";
    qu.pop();
}


}

