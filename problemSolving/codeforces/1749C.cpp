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

            bool eq = false;
            f(i,n){
                cin>>arr[i];
            }
            int temp =arr[0];

             f(i,n){
                if(temp==arr[i] && n!=1){
                 eq = true;
                }
                else{
                eq = false;
                break;
                }
                 temp = arr[i];
            }
            if(eq){
                cout<<0<<nl;
            }else{

                cout<< *max_element(arr, arr+n)<<nl;
            }

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


