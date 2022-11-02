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
        char arr[10][10];
        f(i,8){
            f(j,8){
                cin>>arr[i][j];
            }
            }
            char ans =' ';

            f(i,8){
        int c=0;
                f(j,8){
                    if(arr[i][j]=='R'){
                        c++;
                    }
                }
                if(c==8){
                    ans ='R';
                    break;
                }
            }

            if(ans=='R'){
                cout<<ans<<nl;
            }else{
                cout<<'B'<<nl;
            }
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}




