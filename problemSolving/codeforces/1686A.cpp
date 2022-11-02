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
        int arr[n+100];
        int sum=0;
        f(i,n)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
    bool ok =0;
        f(i,n){
            if((sum-arr[i]) == arr[i]*(n-1)){
             cout<<"YES"<<nl;
                ok =1;
                break;
            }
        }

        if(ok==0)  {
            cout<<"NO"<<nl;
        }

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


