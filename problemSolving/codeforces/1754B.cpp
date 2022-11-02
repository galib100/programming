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
        if(n<=3){
            f(i,n){
               if(i==0){
                cout<<i+1;
               }else{
                cout<<" "<<i+1;
               }
            }cout<<nl;
        }else{

                int x=n/2+1;
                for(int i=1;i<=n/2;++i){
                    if(i!=1){cout<<" ";}
                    cout<<x<<" "<<i;
                    x++;
                }
                    if(n%2!=0){
                        cout<<" "<<n;
                    }
                cout<<nl;

            }
        }
    }




int main()
{
    fastio;



    solve();
    return 0;
}



