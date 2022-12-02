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
        ll sumS=0;
        ll sumS2=0;

        f(i,n){
            ll a;
            cin>>a;
            if(a>0){
                sumS += a;
            }else{
                sumS2 +=a;
            }

        }
        abs(sumS2)>abs(sumS)?cout<<abs(sumS2)-abs(sumS)<<nl:cout<<abs(sumS)-abs(sumS2)<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


