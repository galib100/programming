#include <iostream>
#include<bits/stdc++.h>
#include <set>
#include <vector>
using namespace std;
#define ll long long int
#define pb push_back

int main(void)
{
    vector<ll > m;
    vector<ll > ::iterator low,hi;

    ll n,a,q,k;

    scanf("%lld",&n);

    for(ll i =0; i<n; i++)
    {
        scanf("%lld",&a);
        m.pb(a);//input vector
    }
    scanf("%lld",&q);
    while(q--)
    {
        scanf("%lld",&k);

        low = lower_bound(m.begin(),m.end(),k);
        hi= upper_bound(m.begin(),m.end(),k);
        cout<<low - m.begin()<<" "<<hi - m.begin()<<endl;

    }




    return 0;
}
