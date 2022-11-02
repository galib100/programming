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
            int n,k;
            cin>>n>>k;
            vector<int>v;
            ll arr[n+10]={0};
            for(int i=1;i<=n;++i){
                cin>>arr[i];
            }

            for(int i=1;i<=n;++i){
                for(int j=1;j*k<=n; j++){
                if((i+j*k)<=n && (arr[i]< arr[i+j*k])){
                        swap(arr[i],arr[i+j*k]);
                    }
                }

            }
        ll sum =0;

            for(int i=1;i<=k;++i){
             sum+=arr[i];
            }
//        cout<< accumulate(arr+1,arr+k+1,0)<<nl;
        cout<< sum<<nl;


    }
}


int main()
{
    fastio;



    solve();
    return 0;
}



