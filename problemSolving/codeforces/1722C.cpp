#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string ss1[3][n];
        vector<string> vs;
        for(int i=0; i<3; ++i)
        {
            for(int j = 0; j<n; ++j)
            {
                cin>>ss1[i][j];
                string ss;
                ss = ss1[i][j];
                vs.push_back(ss);
            }
        }

        for(int i=0; i<3; ++i)
        {
        int c,ans=0;
            for(int j = 0; j<n; ++j)
            {

                c = count(vs.begin(),vs.end(),ss1[i][j]);
                if(c==1)
                {
                    ans +=3;
                }
                else if(c==3)
                {
                    ans +=0;
                }
                else
                {
                    ans= ans +(c-1);
                }

            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}


int main()
{

    solve();
    return 0;
}


