#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n,h;
    int c=0;
    cin>>n>>h;
    while(n--){
        ll a;
        cin>>a;
        if(a>h){
        c+=2;
        }else{
            c++;
        }
    }
    cout<<c<<endl;

}


int main()
{

    solve();
    return 0;
}


