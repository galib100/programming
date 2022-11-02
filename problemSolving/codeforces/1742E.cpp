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
        ll n,q;
        cin>>n>>q;
        ll arr[n+100];
        ll arr1[n+100];
        int temp =0;
        f(i,n){
            cin>>arr[i];
//            arr1[i]=arr[i]+temp;
//                temp = arr1[i];
        }

        f(i,q){
            cin>>arr1[i];
        }
        f(i,q){
        ll sum=0;
            f(j,n){
                if(arr1[i]>=arr[j]){
                    sum+=arr[j];
                    }else{
                    break;
                    }
            }
           i==0?cout<<sum: cout<<" "<<sum;
        }cout<<nl;

    }


}


int main()
{
    fastio;



    solve();
    return 0;
}






