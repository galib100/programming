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
       ll arr[n+10];
       vector<int>vec;
       set<int>s;
       f(i,n){
        cin>>arr[i];
        vec.push_back(arr[i]);
        s.insert(arr[i]);
       }
       int cpl =0;
       int sgl =0;
       int half =0;
//       for(auto it=s.begin();it!=s.end();++it){
//        int c =count(vec.begin(),vec.end(),*it);
//           if(c>=2){
//            cpl++;
//           if(n/c ==2 && n%c==0)half++;
//           }else sgl++;
//       }

        if(s.size()==2){
            cout<<(n/2) +1<<nl;
        }else
        {
        cout<<n<<nl;
        }

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


