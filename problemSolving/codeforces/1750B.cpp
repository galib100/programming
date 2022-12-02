#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        cin>>n;
            string ss;
            cin>>ss;
            ll zC =0,oC =0;
            f(i,n){
                if(ss[i]=='0'){
                    zC++;
                }else{
                    oC++;
                }
            }

            char temp = ss[0];
            ll mostC =0;
            ll currentC=0;
            f(i,n){
                if(ss[i]==temp){
                    currentC++;

                }else{
                    currentC =1;
                }
                mostC = max(currentC,mostC);
                temp= ss[i];
            }
//            cout<<mostC<<nl;
//            cout<<zC<<" "<<oC<<nl;
                ll mx = 0;
                if(pow(mostC,2) >(oC*zC)){

              cout<<mostC*mostC<<nl;;
                }else{
                   cout<<oC*zC<<nl;

                }

}
}


int main()
{
    fastio;



    solve();
    return 0;
}




