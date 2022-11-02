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
    ll n,q;
    cin>>n>>q;
    ll arr[n+10];
    ll arrSum[n+10];

    f(i,n)
    {
        cin>>arr[i];

    }
    sort(arr,arr+n,greater<int>());
    ll sum =0;
    f(i,n)
    {
        arrSum[i] = sum +arr[i];
        sum+=arr[i];
    }
    f(i,q)
    {
        int x,y;
        cin>>x>>y;

    if(x==y){
        cout<<arrSum[x-1]<<nl;
       }
       else{
       cout<<arrSum[x-1] - arrSum[x-y-1]<<nl;

    }
     }


}


int main()
{
    fastio;



    solve();
    return 0;
}


