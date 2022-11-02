//https://vjudge.net/contest/523296?fbclid=IwAR0Kd8Nm7AW7ll5Ls04s1pEJlCHKoW6WyTJaUC99Aj-ejj6dnV4kttk685A#problem
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
  ll n;
  cin>>n;
  string ss;
  cin>>ss;
    vector<pair<int,char>>v;
    f(i,n){
        int a;
        cin>>a;
        v.push_back(make_pair(a,ss[i]));
    }
    sort(v.rbegin(), v.rend());

        int temp =v[0].second;
        int c=0;
        int cV = 0;

//        f(i,n){ cout<<v[i].first<<" ";cout<<v[i].second<<nl;}
            f(i,n){
                if((v[i].second=='1' && temp=='0')){
                    c++;

                }else if(v[i].first==v[i+1].first && (v[i].second!=v[i+1].second)){
                c++;
                }
        temp=v[i].second;
    }
//    cout<<c<<nl;
    cout<<n-c<<nl;

}


int main()
{
    fastio;



    solve();
    return 0;
}

