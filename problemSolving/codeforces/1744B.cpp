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
        ll n,q;
        cin>>n>>q;
        int arr[n+10];
        ll sum =0;
        int nO =0;
        int nE =0;
        f(i,n)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i] %2 ==0)
            {
                nE++;
            }
            else
            {
                nO++;
            }
        }
        f(i,q)
        {
            int ty;
            ll nu;
            cin>>ty;
            cin>>nu;

            if(ty==0)
            {
                sum+=(nE*nu);
                if(nu%2!=0)
                {
                    nO = nO+nE;
                    nE = 0;
                }
            }
            else
            {
                sum+=(nO*nu);
                if(nu%2!=0)
                {
                    nE = nO+nE;
                    nO = 0;
                }

            }

    cout<<sum<<nl;

        }
    }
}




int main()
{
    fastio;



    solve();
    return 0;
}



