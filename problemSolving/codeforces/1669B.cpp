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
            f(i,n){
                cin>>arr[i];
            }
             bool f =1;
             sort(arr,arr+n);
             if(n<=2){
                cout<<"-1"<<nl;
             }else{


            f(i,n-2){
                if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2]){
                    cout<<arr[i]<<nl;
                    f=1;
                    break;
                }else{
                f=0;
                }
            }
            if(f==0){
                cout<<"-1"<<nl;
            }
            }

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}




