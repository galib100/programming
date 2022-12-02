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

            string ss;
             vector<char> ve;
            vector<char> rL;
            bool vul=false;
          while(getline(cin,ss)){

            f(i,ss.size()){

                if(vul){
                    if(ss[i]!='[' && ss[i]!=']') ve.push_back(ss[i]);
                }else{
                    if(ss[i]!='[' && ss[i]!=']') rL.push_back(ss[i]);
                }
                if(ss[i]=='['){
                    vul =true;
                }else if(ss[i]==']'){
                    vul = false;
                }
            }
        f(i,ve.size()){
            cout<<ve[i];
        }

         f(i,rL.size()){
            cout<<rL[i];
        }
        cout<<nl;
}
}


int main()
{
    fastio;



    solve();
    return 0;
}

