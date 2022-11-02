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
        int a[n+100],b[n+100];
        int ca=0;
        int cb=0;
        f(i,n)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                ca++;
            }
        }
        f(i,n)
        {
            cin>>b[i];
            if(b[i]==1)
            {
                cb++;
            }
        }
        int pos=0;
        f(i,n)
        {
            if(a[i]!=b[i])
            {
                pos++;
            }
        }
        if(abs(ca-cb)==pos)
        {
            cout<<abs(ca-cb)<<endl;
        }
        else
        {
            cout<<abs(ca-cb)+1<<endl;
        }
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}

