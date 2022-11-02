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

int fact(int n);

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
void solve()
{
   string ss;
   cin>>ss;
   string s1;
   cin>>s1;
   set<char>st;

   ll ans= 0;
   f(i,s1.size()){
       st.insert(s1[i]);
   }
   for(auto var:st){
      int n1  =count(s1.begin(),s1.end(),var);
      int n2 = count(ss.begin(),ss.end(),var);
      ans += nCr(n2,n1);
   }
   cout<<ans<<nl;

}


int main()
{
    fastio;



    solve();
    return 0;
}


