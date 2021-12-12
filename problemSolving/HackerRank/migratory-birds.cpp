#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll n;
cin>>n;
ll bird[n];
priority_queue<ll>pq;
for(ll i=0;i<n;i++){
    cin>>bird[i];
}
for(ll i=0;i<n;i++){
    for(ll j=i;j<n-1;j++){

    if(bird[i] == bird[j+1]){
      pq.push(bird[i]);
    }
}
}
ll x = 0;
while(!pq.empty()){
   x = pq.top();
   pq.pop();
}
cout<<x<<endl;

return 0;
}
