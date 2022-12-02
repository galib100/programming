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
        ll sum =0;
        ll n;
        cin>>n;
            ll arr[n+10];

        f(i,n){
            cin>>arr[i];
            sum+=arr[i];
        }
        f(i,n){
            if(arr[i]==0){
                arr[i]=(0-sum);
//                cout<<(0-sum);
                break;
                }
        }
            int c=0;
            int cnt =0;
                f(i,n){
                    c+=arr[i];
                    if(c==0){
                        cnt++;
                    }
                }
                cout<<cnt<<nl;
        }

     }




int main()
{
    fastio;



    solve();
    return 0;
}


