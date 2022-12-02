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
void equPrint(int n)
{
    cout<<1<<" "<<1<<nl;
    cout<<2<<" "<<n<<nl;
}
void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string a;
        string b;
        bool isEq=true;

        bool noEq =true;
        ///arry input

        cin>>a;
        cin>>b;

        f(i,n)
        {

            if(a[i]!=b[i]) isEq=false;
            else noEq=false;
        }
        if(isEq)
        {
            cout<<"YES"<<nl;
            cout<<2<<nl;
            equPrint(n);
        }
        else if(noEq==true && n<=3)
        {
            cout<<"YES"<<nl;
            if(a=="110"){
            cout<<1<<nl;
                cout<<1<<" "<<2<<nl;
            }else if(a=="001"){
            cout<<1<<nl;
                cout<<3<<" "<<3<<nl;
            }else if(a=="011"){
            cout<<1<<nl;
                cout<<2<<" "<<3<<nl;
            }else if(a=="101"){
                cout<<3<<nl;
                cout<<2<<" "<<2<<nl;
                equPrint(n);
            }else{
                cout<<1<<nl;
                f(i,n){if(a[i]=='1')cout<<i+1<<" "<<i+1<<nl;}
            }
        }
        else
        {
            cout<<"NO"<<nl;
        }


    }

}


int main()
{
    fastio;



    solve();
    return 0;
}

