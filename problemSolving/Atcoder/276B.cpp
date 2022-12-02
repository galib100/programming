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
    ll n,m;
    cin>>n>>m;
int arr[10][10]={0};

    f(i,m){
            ll x,y;
            cin>>x>>y;
            arr[x][y]=1;

    }

//    f(i,m){
//             f(j,n) cout<<arr[i][j]<<" ";
//             cout<<nl;
//    }
    f(i,n){

        vector<int>v;
        int c=0;
        f(j,n){
            if(arr[i][j]==1){
                    v.push_back(j);
                    c++;
            }
        }
        cout<<c;
        f(i,n){
            cout<<" "<<v[i];
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




