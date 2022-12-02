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
bool coprime(int a,int b){
    if(__gcd(a,b)==1){
        return true;
    }else{
        return false;
    }
}
void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int arr[n+100];
        for(int i =1;i<=n;++i){
            cin>>arr[i];
        }
        ll big =0;
        for(int i=n;i>=2;i--){
            for(int j=i;j>=1;j--)
                if(coprime(arr[i],arr[j])){
                    if(big< i+j){
                        big =i+j;
                        break;
                    }else{
                        break;
                    }
                }
        }
        big==0?cout<<-1<<nl:cout<<big<<nl;


    }

}


int main()
{
    fastio;



    solve();
    return 0;
}





