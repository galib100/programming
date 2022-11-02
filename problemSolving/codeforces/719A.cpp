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

        cin>>n;

        vector<char>v;
        vector<char>::iterator it;
        vector<char>::iterator it1;

        for(int i =0; i<n; ++i)
        {

            char x;
            cin>>x;
            v.push_back(x);
        }
        char temp =*(v.begin()+1);
        int c =0;
        for(it =v.begin(); it!=(v.end()-1); it++)
        {
            if(temp != *it)
            {
            cout<<*it<<"-ager soman na"<<endl;
                it1 = find(it+1,v.end(),*it);
                if(it1!=v.end())
                {
                    c =1;

                    cout<<*it<<"-find it"<<endl;
                }
            }
            temp = *(it+1);

        }
        if(c==1)
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


