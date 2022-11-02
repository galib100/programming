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
        int n,m,sx,sy,d;
        cin>>n>>m>>sx>>sy>>d;

//        cout<<(abs(n-sx)+ abs(m-sy))<<nl;1
        if((d<abs(n-sx) && d<(sy-1))||(d<abs(m-sy) && d<(sx-1))){
            cout<<abs(n-1)+(m-1)<<nl;

        }else{
            cout<<-1<<nl;
        }

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}

