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

const int mod = 998244353;
void solve()
{
        ll n;
        cin >> n;
    n %= mod;
    if(n < 0) n += mod;
    cout << n << endl;



}


int main()
{
    fastio;



    solve();
    return 0;
}


