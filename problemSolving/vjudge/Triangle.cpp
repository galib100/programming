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
bool isTrig(int a,int b,int c)
{
    if((a+b)>c && ((a+c)>b && (b+c)>a))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve()
{
    int n;
    cin>>n;
    ll arr[n+10];
    f(i,n)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    bool nf =false;
    for(int i =0; i<n; i++)
    {
        for(int j =i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(isTrig(arr[i],arr[j],arr[k]))
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<nl;
                    nf=true;
                    break;
                }
            }
        }
    }
    if(nf==false)
    {
        cout<<0<<" "<<0<<" "<<0<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


