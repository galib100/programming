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
        f(i,n)
        {
            cin>>arr[i];
        }
        string ss;
        cin>>ss;
        int c=0;
        f(i,n)
        {

            for(int j=i+1; j<n; j++)
            {
                if(arr[j]==arr[i] && ss[j]!=ss[i])
                {
                    c=1;
                    break;
                }

            }
            if(c==1){
            break;
            }
        }
        if(c==1){
            cout<<"NO"<<nl;
        }else{
            cout<<"YES"<<nl;
        }

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


