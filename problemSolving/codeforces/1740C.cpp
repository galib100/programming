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
             ll mx = *max_element(arr,arr+n);
             ll mn = *min_element(arr,arr+n);
             sort(arr,arr+n);
             ll mx2 = *max_element(arr+1,arr+n-1);
             ll mn2 = *min_element(arr+1,arr+n-1);
             ll ans2 =0;
             if(abs(mx-mx2)> abs(mn2-mn)){
                ans2 =abs(mx-mx2);
             }else{
                ans2 =abs(mn2-mn);
             }
             cout<< abs(mx-mn) +ans2 <<nl;

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


