
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0;
        for(int i=0; i<=n; i++)
        {
            if(i ==0 || i==1)
            {
                c++;
            }
            else if(i%2==0)
            {
                c+=1;
            }
            else
            {
                c *=2;
            }
        }
        cout<<c<<endl;
    }
}


int main()
{

    solve();
    return 0;
}

