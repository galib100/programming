#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long int

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define nl "\n"
using namespace std;
void solve()
{
    multiset<int > s;
     multiset<int>:: iterator it;
   ll q;
//   scanf("%lld",&q);
    cin>>q;

  for(int i=0; i<q; i++)
    {
        int p;
        cin>>p;
//        scanf("%lld %lld",&p,&x);

        if(p==0)
        {
            int x;
            cin>>x;
            //insert
                 s.insert(x);
    cout<<s.size()<<nl;

        }
        else if (p==1)
        {
             int x;
            cin>>x;
            //find
          cout<< s.count(x) <<endl;

        }
        else if(p==2)
        {
         int x;
            cin>>x;
            //delete
            s.erase(x);

        }
        else
        {
        int r,l;
            cin>>l;
            cin>>r;

            for( it=s.begin();it!=s.end(); ++it)
            {

               if(*it<=r && *it >=l) {
               cout<<*it<<endl;
               }
            }

    }


}
}
int main()
{
fastio;
    solve();

    return 0;
}


