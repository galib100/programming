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
int fact(int n)
{
    return (n==1 || n==0) ? 1: n * fact(n - 1);
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[20];
        f(i,n){
            cin>>arr[i];
        }
        ll bas= (fact(4) / pow(fact(2),2));
        if((10-n)<=2){
            cout<<bas<<nl;
        }else{
            cout<< bas*nCr(10-n,2)<<nl;
        }
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


