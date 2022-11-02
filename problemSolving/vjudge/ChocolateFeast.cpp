#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve()
{
    ll t;
    scanf("%lld",&t);
    while(t--){
    ll n,c,m;
    scanf("%lld%lld%lld",&n,&c,&m);

    ll nC = n/c ;
     ll nK;
    if (nC > m ){
   nK = nC + nC/m + nC%m ;
    }
    else {
   nK = nC + nC/m;
    }


    nC = nC + nK/m;
    cout<<nC<<endl;


    }

}
int main()
{
    solve();
        return 0;
}

