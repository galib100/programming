#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr first
#define sc second
#define f(i,n) for(int i=0;i<n;++i)

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define nl "\n"
void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        if(s==0){
            cout<<0<<nl;
        }else if(s/(k*b)!=1){
            cout<<-1<<nl;
        }else{
            if(s%(b*k)<k){
                cout<<s;
                f(i,n-1){ cout<<" "<<"0"; }cout<<nl;
            }else{
                ll bb = (s%(k*b)) %(k-1) ;
                ll nn = (s%(k*b) ) /(k-1) ;
                cout<<(k*b)+bb;
                ll nnn=n-nn-1;
                f(i,nn){
                    cout<<" "<<k-1;
                }f(i,nnn){cout<<" "<<0;}
                cout<<nl;
            }
        }

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


