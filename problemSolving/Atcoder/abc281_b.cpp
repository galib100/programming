// Problem: B - Sandwich Number
// Contest: AtCoder - AtCoder Beginner Contest 281
// URL: https://atcoder.jp/contests/abc281/tasks/abc281_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

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
    cin>>ss;
    
    string aa;
    for(int i =1;i<ss.length()-1;++i){
    	aa= aa + ss[i];
    }
    stringstream geek(aa);
    int a=0;
    geek>>a;
    string ans="No";
    // cout<<a<<nl;
    if(ss[0]>='A'&& ss[0]<='Z'){
    	if(ss[7]>='A' &&ss[7]<='Z'){
    		if(a<=999999 && a>=100000){
    			ans = "Yes";
    		}
    	}
    }
    cout<<ans<<nl;

}


int main()
{
    fastio;



    solve();
    return 0;
}

