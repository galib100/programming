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

       string ss;
       cin>>ss;
        ll n = ss.size();
        ll nn = n*2;
      char ss1[nn+10];
      ll t =0;
       for(int i=0;i<n;++i){
//            ss1.push_back(ss[i]);
            ss1[i]=ss[i];
           ss1[nn-i-1]=ss[i];
        }

       f(i,nn){
        cout<<ss1[i];
       }cout<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


