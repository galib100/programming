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
    while(t--){
        ll n,c;
        cin>>n>>c;

        ll arr1[1000]={0};
        ll arr2[1000]={0};
        f(i,n){

            cin>>arr1[i];
                arr2[arr1[i]]++;
            }
                        int aa =*max_element(arr1,arr1+n)+1;
    int ans=0;
            f(i,aa){
                if(arr2[i]>1){
                    ans+=c;
                }else if(arr2[i]==1){
                    ans++;
                }
            }
//            f(i,n) cout<<i<<" in "<<arr2[i]<<nl;

                ans<n?cout<<ans<<nl:cout<<n<<nl;
            ans=0;

//            fill(arr2,arr1+n,0);

    }

}


int main()
{
fastio;



    solve();
    return 0;
}


