//https://www.hackerrank.com/contests/ruet1601/challenges/lets-start
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(ll t){
ll x,y;
cin>>x>>y;
cout<<"Case " <<t<<": "<<x+y<<endl;
}
int main(){
ll t;
cin>>t;

for(ll i=1;i<=t;i++){
solve(i);
}
return 0;
}
