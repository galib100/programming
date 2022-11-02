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

            ll n,k;
            cin>>n>>k;
            int arr[n+10];
            for(int i=0; i<n; ++i){
               cin>>arr[i];
            }
            int c=0;
           for(int i=0;i<n;++i){
                if(arr[i]==1){
                    c=0;
                    cout<<"YES"<<nl;
                    break;
                }else{
                    c=1;
                }
            }
            if(c==1){
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


