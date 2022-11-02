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
        ll n;
        cin>>n;
        int c =0;
        if(n==1){
        cout<<1<<endl;
        }else{
        for(int i=2;i<=n;++i){
               for(int j=i;j<=n;++j){
                    if(i%j!=0){
                        c++;
                    }
               }
        }
        cout<<"output: ";

        }
                       cout<<(n*n)-(c*2)-(n-3);
    }
}


int main()
{
fastio;



    solve();
    return 0;
}


