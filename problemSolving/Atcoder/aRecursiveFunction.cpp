
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
int fun(int n){
    if(n==0){
        return 1;
    }else{
    return n* fun(n-1);
    }
}
void solve()
{

     int n;
     cin>>n;
     cout<<fun(n)<<nl;

}


int main()
{
    fastio;



    solve();
    return 0;
}

