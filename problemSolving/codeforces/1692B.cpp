#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        set<int>s;
        set<int>::iterator it;

        cin>>n;
        for(int i =0; i<n; i++)
        {
            ll n1;
            cin>>n1;
            s.insert(n1);

        }
        if(s.size()%2==0 && n%2==0)
        {
            cout<<s.size()<<endl;
        }
        else if(s.size()%2==0 && n%2!=0)
        {
            cout<<s.size()-1<<endl;
        }else if(s.size()%2!=0 && n%2==0){
            cout<<s.size()-1<<endl;
        }
        else if(s.size()%2!=0 && n%2!=0){
            cout<<s.size()<<endl;
        }

    }

}


int main()
{

    solve();
    return 0;
}


