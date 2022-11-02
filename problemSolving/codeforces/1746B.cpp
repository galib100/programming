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
        int cOne=0;
        f(i,n){
                cin>>arr[i];
                if(arr[i]==1){
                    cOne++;
                }
        }
        int cZ=0;
        for(int i =n-1;i>=(n-cOne);i--){
                        //11-6
            if(arr[i]==0){
                cZ++;
            }
        }
        cout<<cZ<<nl;



    }

}


int main()
{
    fastio;



    solve();
    return 0;
}



