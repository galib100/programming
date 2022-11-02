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
    while(t--){
        ll n,m;
        cin>>n>>m;
        if(n==1 && m==1){
            cout<<0<<nl;
        }else if( (n==1 && m>2 ) || (n>2 && m==1)){
            cout<<-1<<nl;
        }else{
            int ans =0;
            int t=abs(n-m);
           int s=0,b=0;
           if(n>m){
           s=m;
           b=n;
           }else{
            s=n;b=m;
           }
            ans = (s-1)*2;
            t%2==0? ans+=t*2: ans+=t*2 -1;
            cout<<ans<<nl;
        }
    }

}


int main()
{
fastio;



    solve();
    return 0;
}


