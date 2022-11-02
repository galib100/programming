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
        int arr[n+10];
        int arr1[n+10];
        ll sum=0;
        int temp = 0;
        f(i,n){
            cin>>arr[i];
        }
        f(i,n){
            cin>>arr1[i];
        }

        f(i,n){
         sum= sum+arr[i]+arr1[i];

            if(temp<arr1[i]){
                temp = arr1[i];
                }

        }
        cout<<sum-temp<<nl;

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}

