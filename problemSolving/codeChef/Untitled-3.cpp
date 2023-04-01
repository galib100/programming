//https://codeforces.com/problemset/problem/1/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll cll(ll x,ll y){
	if(x%y==0)return x/y;
	else return(x/y)+1;
}
void solve()
{
    ll n,m,a;
    ll d,p;
    cin>>n>>m>>a;
 	cout<<cll(m,a)*cll(n,a)<<endl;

}


int main()
{
    solve();

    return 0;
}
 