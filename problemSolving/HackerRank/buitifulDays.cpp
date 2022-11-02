#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int revNum(int n)
{
    int c =0;
    while(n!=0){

            c=c*10 +(n%10);

            n = n/10;



    }
return c;

}
void solve()
{
    ll a,b,k;
    cin>>a>>b>>k;
    int c =0;
    for(int i=a; i<=b; ++i)
    {
        abs(i-revNum(i))%k ==0?c++:NULL;
    }
    cout<<c<<endl;
}


int main()
{

    solve();
    return 0;
}


