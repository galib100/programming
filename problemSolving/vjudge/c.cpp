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
double dis(int x,int y){
    return sqrt((x*x)+(y*y));
}
void solve()
{
    ll t;
    cin>>t;
        ll arr[t+10];
        ll arr1[t+10];
        vector<pair<int,int>>vP;
   f(i,t){
    ll x,y;
    cin>>x>>y;
        vP.push_back(make_pair(x,y));
//    cin>>arr[i];
//    cin>>arr1[i];

   }
//   f(i,t){
//    cout<<vP[i].first<<" "<<vP[i].second<<nl;
//   }
    double mx = 0;
   for(int i=0;i<t-1;i++){
        for(int j=i+1;j<t;j++){
            mx =max(mx,dis(abs(vP[i].first-vP[j].first),abs(vP[i].second-vP[j].second)));
        }
   }
//    cout<<mx<<nl;
    if(roundf(mx)==mx){
        printf("%.1f\n",mx);
    }else{
    printf("%.8f\n",mx);

    }
    }


int main()
{
    fastio;



    solve();
    return 0;
}




