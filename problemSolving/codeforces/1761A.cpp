#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll n,a,b;
        cin>>n>>a>>b;
        if(n==1 && a==1 && b==1){
            cout<<"Yes"<<nl;
        }else{
            if((n==a) && (n==b)){
                cout<<"Yes"<<nl;
            }else if((n>=(a+b+2))){
                cout<<"Yes"<<nl;
            }else{
                cout<<"No"<<nl;
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

