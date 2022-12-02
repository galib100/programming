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
            ll arr[n+10];
            f(i,n){
                cin>>arr[i];

            }
            ll sum=0;
            ll mn = *min_element(arr,arr+n);
                if(arr[0]==mn){
                    sum = mn*2 -1;
                }else{
                    sum = mn*2;
                }
            if(sum%2==0){
                cout<<"Alice"<<nl;
            }else{
                cout<<"Bob"<<nl;
            }

    }

    }


int main()
{
    fastio;



    solve();
    return 0;
}




