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
        ll n;
        cin>>n;
        ll arr[n+10];
        ll arr1[n+10];
        string ss;
            cin>>ss;

         f(i,n){
            cin>>arr1[i];
        }
        ll sum =0;
         f(i,n-1){
           if(ss[i]=='0'&& ss[i+1]=='1'){
                if(arr1[i]>arr1[i+1]){
                    ss[i]='1';
                    ss[i+1]='0';
                }
           }

                   if (ss[i]=='1'){
                   sum+=arr1[i];
                   }
        }

        cout<<sum<<nl;
}
}


int main()
{
    fastio;



    solve();
    return 0;
}
