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
int fndPos(char a,string ss){
   return ss.find(a);
}
void solve()
{
    string ss = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char shift;
    cin>>shift;
    string s1;
    cin>>s1;

    if(shift=='L'){
        f(i,s1.size()){
        cout<< ss[fndPos(s1[i],ss)+1];
        }cout<<nl;
    }else{
         f(i,s1.size()){
        cout<< ss[fndPos(s1[i],ss)-1];
        }cout<<nl;
    }


}


int main()
{
    fastio;



    solve();
    return 0;
}


