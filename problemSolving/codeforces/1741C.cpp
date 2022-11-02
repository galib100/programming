//https://codeforces.com/problemset/problem/1741/C
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
        int arr[n+10];
        ll sum =0;
        f(i,n){
            cin>>arr[i];
            sum+= arr[i];
        }
        int c=0;
        int sm=0;
        cout<<sum<<nl;
        int mx = *max_element(arr,arr+n);
        cout<<mx<<nl;
        n=n-1;
        sm =sum-mx;
        if(n%2!=0){
            if(sum%sm==0){
                cout<< sm/mx +1<<nl;
            }
        }else{
            cout<<sm/mx <<nl;
        }

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}

