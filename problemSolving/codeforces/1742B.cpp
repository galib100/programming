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
        int n;
        cin>>n;
        int arr[n+100];
        f(i,n){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        bool ans =true;
        f(i,n-1){
            if(arr[i]==arr[i+1]){
                ans = false;
//                cout<<arr[i]<<" "<<arr[i+1]<<nl;
                break;
            }
        }
        if(ans==true){
            cout<<"YES"<<nl;
        }else{
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



