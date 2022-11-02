#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int disOfPoint(int x1,int y1,int x2,int y2)
{

    return abs(x1-x2) + abs(y1-y2);
}
void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int sum =0;
        for(int i =0; i<n; i++)
        {
            int a,b;
            cin>>a>>b;
            sum = sum +2* disOfPoint(0,0,a,b);
        }
        cout<<sum<<endl;
}

}


int main()
{

    solve();
    return 0;
}


