
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
        ll n;
        cin>>n;
        if(n==3){
            cout<<"-1"<<nl;
        }else if (n==2){
            cout<<2<<" "<<1<<nl;
        }

        else{
                cout<<n-1<<" "<<n;
                for(int i=1;i<n-1;++i){
                    cout<<" "<<i;
                }

            cout<<nl;
        }
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}

