#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n,a,b,c,x,y,z;
    cin>>n>>x>>y>>z;

     a= min(min(x,y),z);///2

     c= max(max(x,y),z);///5
 b = (x+y+z)-(a+c);//5
  cout<<a<< " "<<b <<" "<<c;

}


int main()
{

    solve();
    return 0;
}

