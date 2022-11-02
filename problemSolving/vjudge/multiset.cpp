#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long int
using namespace std;
void solve()
{
    multiset<int > s;
     multiset<int>:: iterator it;
   ll q,p,x,l,r;

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

        }
        else if (p==1)
        {
            //find

          cout<< s.count(x) <<endl;

        }
        else if(p==2)
        {
            //delete
            s.erase(s.find(x));

        }
        else
        {
//            cin>>r;
            scanf("%lld",&r);
            for( it=s.find(x); ; ++it)
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


