#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll m,s;
        cin>>m>>s;
        ll arr[m+10];
        ll totalSum=0;
        ll givenNumSum=0;
        f(i,m)
        {

            cin>>arr[i];
            givenNumSum+=arr[i];
        }
        ll mn=0,mx=0;
        mn = *min_element(arr,arr+m);
        mx = *max_element(arr,arr+m);
        string ans ="";
        for(int i=1; i<=mx; i++)
        {
            totalSum+=i;
        }

//        cout<<totalSum<<" "<<givenNumSum;
        ll subSum =totalSum-givenNumSum;
//        cout<<subSum<<nl;
    if(subSum==s && s<=mx){
        ans = "YES";
    }else if(s>mx){
        for(int i =mx+1;i<=s;i++){
            subSum+=i;
            if(subSum==s){
                ans ="YES";
                break;
            }else if(subSum>s){
                ans="NO";
                break;
            }
        }

    }else ans="NO";

        cout<<ans<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


