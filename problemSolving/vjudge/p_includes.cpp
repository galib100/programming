//https://vjudge.net/contest/479265#problem/P
#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<list>
#include<algorithm>

using namespace std;
#define ll long long int
#define pb push_back
void solve()
{
    vector<ll>vec1;
    vector<ll>vec2;
    ll a,b,n,m;
    scanf("%lld",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&a);
        vec1.pb(a);
    }

    scanf("%lld",&m);
    for(int i=0; i<m; i++)
    {
        scanf("%lld",&b);
        vec2.pb(b);
    }

    if(includes(vec1.begin(),vec1.end(),vec2.begin(),vec2.end()))
    {
        printf("1\n");

    }
    else
    {
        printf("0\n");
    }

}


int main()
{
    solve();
    return 0;
}


