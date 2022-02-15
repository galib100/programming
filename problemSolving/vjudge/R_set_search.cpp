//https://vjudge.net/contest/479265#problem/R
#include<bits/stdc++.h>
#include<iostream>
#include<queue>
#include<iterator>
#include<list>
using namespace std;
#define ll long long int

void solve()
{
    set<ll>s;
    set<ll>::iterator it;
    ll q,p,x;

    scanf("%lld",&q);
    for(int i=0; i<q; i++)
    {
//        cin>>p>>x;
        scanf("%lld %lld",&p,&x);

        if(p==0)
        {
            //insert
            s.insert(x);
//            cout<<s.size()<<endl;
            printf("%lld\n",s.size());

        }
        else
        {
            //find
            it = s.find(x);
            if(it ==s.end())
            {
//                cout<<0<<endl;
                printf("0\n");
            }
            else
            {
//                cout<<1<<endl;
                printf("1\n");

            }
        }


    }

}


int main()
{
    solve();
    return 0;
}


