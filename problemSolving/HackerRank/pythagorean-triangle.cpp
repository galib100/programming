//https://www.hackerrank.com/contests/ruet1601/challenges/pythagorean-triangle
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    for(ll k=1; k<=t; k++)
    {
        ll c,cnt =0;
        cin>>c;
        for(ll i=1; i<c; i++)
        {
            for(ll j=1; j<c; j++)
            {
                if(c==sqrt(i*i + j*j))
                {
                    cnt++;
                }
            }
        }
        cout<<"Case "<<k<<": "<<cnt<<endl;
        cnt =0;
    }
return 0;
}
