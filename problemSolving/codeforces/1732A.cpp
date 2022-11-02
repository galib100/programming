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
        int n;
        cin>>n;
        int arr[n+10];
        for(int i =1; i<=n; ++i)
        {
            cin>>arr[i];
        }
        int totalCost =0;
        bool ekebar = false;
        if(n==1)
        {
            arr[1]==1?cout<<0<<nl:cout<<1<<nl;
        }
        else
        {
            int mn = arr[1];
            for(int i =n; i>=1; i--)
            {
                mn = __gcd(mn,arr[i]);
            }
            if(mn ==1)
            {

                cout<<0<<nl;
            }
            else
            {
                if(__gcd(mn,__gcd(n,arr[n]))==1)
                {
                    totalCost =1;
                }
                else if(__gcd(mn,__gcd(n-1,arr[n-1]))==1)
                {

                    totalCost = 2;
                }
                else
                {
                    totalCost = 3;
                }
                cout<<totalCost<<nl;
            }
        }
    }

}



int main()
{
    fastio;



    solve();
    return 0;
}

