#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    stack<int>s[n];
    int p,q,t,x;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>p;
        if(p==0)
        {
            ///push
            cin>>t>>x;
            s[t].push(x);
        }
        else if(p==1)
        {
            ///Top
            cin>>t;

            if(!s[t].empty())
            {
                cout<<s[t].top()<<endl;
            }
        }
        else
        {
        ///pop
            cin>>t;
            if(!s[t].empty())
            {
                s[t].pop();
            }
        }
    }


}


int main()
{
    solve();
    return 0;
}

