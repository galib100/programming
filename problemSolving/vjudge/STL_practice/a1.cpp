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
     list<char>l;
     list<char>::iterator it;
     while(getline(cin,ss)){
        it = l.begin();
        f(i,ss.size()){
            if(ss[i]=='['){
                it = l.begin();
            }else if(ss[i]==']'){
                it  =l.end();
            }
            l.insert(it,ss[i]);

        }

     for(auto &&i:l){
           cout<<i;
        cout<<nl;
        l.clear();
        }

     }
}


int main()
{
    fastio;



    solve();
    return 0;
}


