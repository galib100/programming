#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

ll t,n,m,s;

cin>>t;
while(t--){

    cin>>n>>m>>s;//5 2 3
    ll c =1;
    for(ll i=s;c<=m;i++){
        c++;
        if(i>n){
            i = 1;
        }
        if(c==m){
                cout<<i+1<<endl;
        }
    }
}
}
