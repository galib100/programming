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
    ll q,p,x,l,r;
//    cin>>q;
        scanf("%lld",&q);

    for(int i=0; i<q; i++)
    {
//        cin>>p>>x;
        scanf("%lld %lld",&p,&x);

        if(p==0)
        {
            //insert
            s.insert(x);
            printf("%lld\n",s.size());
//            cout<<s.size()<<endl;

        }
        else if (p==1)
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
        else if(p==2)
        {
            //delete
            s.erase(s.find(x));

        }
        else
        {
            cin>>r;
            l = x;
            for( it=s.find(l); ; it++)
            {

//                cout<<*it<<endl;
        printf("%lld\n",*it);
                if(*it==r){
                break;
                }
            }

        }

    }

}


int main()
{
    solve();
    return 0;
}


