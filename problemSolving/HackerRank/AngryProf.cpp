#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,c=0;
        cin>>n>>k;
        for(int i=0; i<n; ++i)
        {
            int an;
            cin>>an;
            if(an<=0)
            {
                c++;
            }
        }
        if(c>=k)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}


int main()
{

    solve();
    return 0;
}

