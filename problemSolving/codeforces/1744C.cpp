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
        char c;
        cin>>n;
        cin>>c;
       string ss;
       cin>>ss;

            ss+=ss;
            int cnt = 0;
            bool cStart = false;
            int mx =0;
            f(i,ss.size()){
                if(ss[i]==c ){
                    cStart =true;
                }
                if(ss[i]=='g'){
                    mx= max(mx,cnt);
                    cnt =0;
                    cStart = false;
                }
                if(cStart){
                    cnt++;
                }

            }
            cout<<mx<<nl;
}
    }




int main()
{
    fastio;



    solve();
    return 0;
}



