#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int lcmFind(ll n1,ll n2)
{
    ll hcf=0;
    if ( n2 > n1)
    {
        ll temp = n2;
        n2 = n1;
        n1 = temp;
    }

    for (ll i = 1; i <=  n2; ++i)
    {
        if (n1 % i == 0 && n2 % i ==0)
        {
            hcf = i;
        }
    }
    return hcf;
}
bool conditionCheck(ll lcm,ll gcd)
{
    if((lcm/gcd)<=3 )
    {
        return true;
    }
    else return false;
}

void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll lcm = 1;
        ll gcd =1;
        ll c=0;
        cin>>n;
        for(ll i =1; i<=n; i++)
        {

            for(ll j =i; j<=n; j++)
            {
                gcd = lcmFind(i,j);
                lcm =(i*j)/(lcmFind(i,j));
                if(i==j){
                if(conditionCheck(lcm,gcd))
                {
                    c++;
                }

                }else{
                    if(conditionCheck(lcm,gcd))
                    {
                        c+=2;
                    }
                }

//                    cout<<gcd<<" lcm ="<<lcm<<endl;
            }

        }
        cout<<c<<endl;
    }





}


int main()
{

    solve();
    return 0;
}


