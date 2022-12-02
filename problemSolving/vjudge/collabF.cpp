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
        ll n,m;
        cin>>n>>m;
        ll totalNeg=0;
        ll arr[n+10];
            f(i,n) cin>>arr[i]; if(arr[i]<0)totalNeg++;
        ll extraDays = m-totalNeg;
        ll ans =0;
        bool st=false;
        f(i,n){
            if(arr[i]<0){
                ans++;
                st = true;
            }else{
                ans++;

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


