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
        string ss;
        cin>>ss;
        bool ans =true;
        int na=0,nb=0;
        f(i,ss.size())
        {
            if(ss[i]=='a' )
            {
                na++;
                if(nb==2 || nb==3)
                {
                    nb=0;
                    ans = true;
                }else if(nb==1)
                {
                    ans=false;
                    break;
                }
            }
            else
            {
                nb++;
                if(na==2 || na==3)
                {
                    na=0;
                    ans = true;
                }
                else if( na==1)
                {
                    ans=false;
                    break;
                }

            }
                if(i==(ss.size()-1) && (nb==1 || na==1)){
                    ans = false;
                }

        }
        ans==true?cout<<"yes"<<nl:cout<<"NO"<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


