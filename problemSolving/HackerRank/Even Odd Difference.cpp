//https://www.hackerrank.com/contests/ruet1601/challenges/even-odd-difference
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll l,r,sO=0,sE=0;
    cin>>l>>r;
    for(ll i=l; i<=r; i++)
    {
        if(i%2==0)
        {
            sE+=i;
        }
        else
        {
            sO+=i;
        }
    }
    cout<<abs(sE-sO)<<endl;
    return 0;
}
