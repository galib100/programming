#include<list>
#include<iterator>
#include<bits/stdc++.h>

using namespace std;
#define ll long long int

void solve()
{
    ll q;
    list<int>li;
    list<int>::iterator it;

    it = li.end();
        cin>> q;
    for(ll i=0; i<q; i++)
    {
        ll n,x,d;
        cin>> n;
        if(n==0)
        {
            cin>>x;

            li.insert(it,x);
             if(it!=li.begin())it--;
//            cout<<x << " insert  before"<<*it<<endl;

        }
        else if(n==1)
        {
            cin>>d;
            if(d>0)
            {
            if(it!=li.end()) it++;

//                cout<<"cursor moved at "<<*it<<endl;
            }
            else if(d<0)
            { 
               
              	if(it!=li.begin()) it--; 
            }
        }
        else
        {
//       cout<<*it<<"removed"<<endl;
           if(it!=li.end())it =li.erase(it);
//            cout<<"cursor at "<<*it<<endl;
             
        }

    }

    for(it=li.begin(); it!=li.end(); it++){

        cout<<*it<<endl;
    }
}


int main()
{


    solve();
    return 0;
}

