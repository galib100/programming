#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll  b,n,m;
    cin>>b>>n>>m;
    ll nar[1000],mar[1000];
    for(ll i=0; i<n; i++)
    {
        cin>>nar[i];
    }
    for(ll i=0; i<m; i++)
    {
        cin>>mar[i];
    }
    ll prc=0;

      for(ll i=0; i<n; i++)
    {
          for(ll j=0; j<m; j++)
        {

           if(  ((nar[i] +mar[j]) >prc) && ((nar[i] +mar[j])<b ) ){
           prc = nar[i] + mar[j];
           }
        }
    }
    prc==0? cout<<-1<<endl : cout<<prc<<endl;

    return 0;

}
