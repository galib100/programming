#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ///3
    int n,m;
    cin>>n;
    int a,b1,b,c;
    c = n%1000;///567
    b1 =(n- c )/1000;///
    b = b1 %1000;///1 234

    a = (b1-(b1%1000))/1000;

    cout<<a<<","<<b<<","<<c<<endl;

    }


int main()
{

    solve();
    return 0;
}

