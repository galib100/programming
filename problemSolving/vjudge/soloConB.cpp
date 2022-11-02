#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n,s,d;
    cin>>n>>s>>d;
    int c=0;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        if(x<s && y>d){
            c=1;
        }
    }
    if(c==1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

}


int main()
{

    solve();
    return 0;
}

