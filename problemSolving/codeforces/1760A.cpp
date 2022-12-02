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

        f(i,n){
            cin>>arr[i];
            arr1[i]=arr[i];
        }
        sort(arr1,arr1+n);
        ll mx= arr1[n-1];
        ll mx2 =arr1[n-2];
        ll mn = arr1[0];
        f(i,n){
                if(arr[i]==mx){
                    cout<<mx-mx2;
                }else cout<<arr[i]-mx;
                if(i!=(n-1)){
                    cout<<" ";
                }
        }cout<<nl;

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}

