#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string reve(string s)
{
    string ss=s;
    reverse(s.begin(),s.end());
    return s;
}
void solve()
{
    vector<string>vec;
     vector<string>::iterator it;
    ll n,k;
    string s,s2;
    cin>>n>>k;
    cin>>s;
    while(k--)
    {
        s = s+reve(s);
        s2= reve(s)+s;
    }
    vec.push_back(s);
    vec.push_back(s2);

   it =  unique(vec.begin(),vec.end());
   vec.resize(distance(vec.begin(),it));
   cout<<vec.size()<<endl;



}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


