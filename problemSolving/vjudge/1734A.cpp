#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr first
#define sc second
#define f(i,n) for(int i=0;i<n;++i)
#define pb push_back
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);

int perForm(int a,int b,int c)
{
    return abs(b-a)+abs(c-b);
}
void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        vector<int>vec;

        cin>>n;
        f(i,n)
        {
            int a;
            cin>>a;
            vec.pb(a);
        }
        sort(vec.begin(),vec.end());
        int temp = perForm(vec[0],vec[1],vec[2]);
        f(i,n-2)
        {
            int temp2= perForm(vec[i],vec[i+1],vec[i+2]);
            if(temp >temp2)
            {
                temp = temp2;
            }

        }
        cout<<temp<<"\n";

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


