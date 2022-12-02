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
        ll n;
        cin>>n;
        string ss;
        cin>>ss;
        char big =' ';
        f(i,n){
            big =max(big,ss[i]);
        }
//        cout<<big<<nl;
        cout<<big-96<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


