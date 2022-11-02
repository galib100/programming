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

const int mod = 998244353;
void solve()
{
        int ax,ay,bx,by,cx,cy,dx,dy;
        cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
        if(sqrt(((ax-cx)*(ax-cx))+((ay-cy)*(ay-cy))) == sqrt((bx-dx)*(bx-dx))+((by-dy)*(by-dy))){
            cout<<"Yes"<<nl;
        }else{
            cout<<"No"<<nl;
        }

}


int main()
{
    fastio;



    solve();
    return 0;
}


