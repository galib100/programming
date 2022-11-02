
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define pb push_back
#define lop(i,n) for(int i=0;i<n;i++)
#define lop1(i,n) for(int i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define mem(b,a) memset(a,b,sizeof(a))
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
//setbit clearbit toggle k-1, k-1
#define setbit(x,k)   (x |=(1<<k))
#define clearbit(x,k) (x &= ~(1<<k))
#define togglebit(x,k)  (x ^=  (1<<k))
#define checkbit(x,k) (x& (1<<k))
// v.erase(unique(v.begin(),v.end()),v.end());
#define inf INT_MAX
#define nn cout<<endl
#define mn 1000000
#define ff first
#define ss second
#define gap " "
 /*stringstream ss;
     ss<<num;
    string k=ss.str();*/
/*ll poww(ll a,ll b)
{
    if(b==0)
    {
        return 1;
    }
    ll x;
    if(b&1)
    {
        x=poww(a,b-1);
        return x*a;
    }
    else
    {
        x=poww(a,b/2);
        return x*x;
    }
}*/
int main()
{
    fast
    ll t=1;
    cin>>t;
    ll ca=1;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1];
        ll sum=0;
        lop(i,n)
        {
            cin>>a[i];
            sum+=a[i];
        }
        bool ok=0;
        for(int i=0;i<n;i++)
        {
            if((((sum-a[i])/(n-1))==a[i])&&((a[i]*(n-1))==(sum-a[i])))
            {
                yes;
                ok=1;
                break;
            }
        }
        if(ok==0)
        {
            no;
        }


    }
}
