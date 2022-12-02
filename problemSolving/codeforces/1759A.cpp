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
        string ss;
        cin>>ss;
        string output ="YES";
       int lastP =ss.size()-1;
        if(ss.size()==1 ){
          if(ss=="Y" || ss=="e"|| ss=="s"){
            cout<<"YES"<<nl;
          }else{
            cout<<"NO"<<nl;
          }
        }else{

        f(i,lastP){
            if(ss[i]=='Y'){
                if(ss[i+1]!='e'){
                    output ="NO";
                    break;
                }
            }else if(ss[i]=='e'){
                if(ss[i+1]!='s'){
                    output ="NO";
                    break;
                }
            }
            else if(ss[i]=='s'){
                if(ss[i+1]!='Y'){
                    output ="NO";
                    break;
                }
            }else{
                output ="NO";
                break;
            }
            }
        cout<<output<<nl;
        }

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


