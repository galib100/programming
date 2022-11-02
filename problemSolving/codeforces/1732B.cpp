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
        string arr;

            cin>>arr;

        int c=0;
        char temp =arr[0];
        f(i,n){
            if(c==0){
                if((temp =='0'&& arr[i]=='0') || (temp =='1' && arr[i]=='1')|| (temp=='0'&& arr[i]=='1')){
                    c=0;
                }else{
                    c++;
                }
            }else{
                if(temp != arr[i]){
                    c++;
                }
            }
            temp = arr[i];
        }
        cout<<c<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


