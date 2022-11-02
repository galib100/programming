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
        int n,m;
        cin>>n>>m;
        int arr[n+10];
        ll sum =0;
        f(i,n){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum>m){
            cout<<sum-m<<nl;
        }else{
            cout<<0<<nl;
        }
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}

