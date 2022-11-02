

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int r,c;
    cin>>r>>c;
    int h,w;
    cin>>h>>w;
    cout<< (r*c) - (h*c+(r-h)*w) << endl;
}


int main()
{

    solve();
    return 0;
}

