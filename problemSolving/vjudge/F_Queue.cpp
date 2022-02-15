#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    queue<int>qu[n];
    int p,q,t,x;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>p;
        if(p==0)
        {
            ///push
            cin>>t>>x;
            qu[t].push(x);
        }
        else if(p==1)
        {
            ///Top
            cin>>t;

            if(!qu[t].empty())
            {
              cout<<qu[t].front()<<endl;
            }
        }
        else
        {
        ///pop
            cin>>t;
            if(!qu[t].empty())
            {
                qu[t].pop();
            }
        }
    }


}


int main()
{
    solve();
    return 0;
}


