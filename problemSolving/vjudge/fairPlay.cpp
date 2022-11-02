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
     int n,m;
     cin>>n>>m;
    ll sum = 0;
     f(i,m){
        int x;
        cin>>x;
        sum+=x;
     }
     cout<<sum%n<<nl;

}


int main()
{
    fastio;



    solve();
    return 0;
}

