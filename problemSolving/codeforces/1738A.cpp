#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr first
#define sc second
#define f(i,n) for(int i=0;i<n;++i)

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define nl "\n"
void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+10];
        vector<int>v1;
        vector<int>v0;
        f(i,n)
        {
            cin>>arr[i];
        }
        int c0=0;
        ll sum0=0;
        int c1=0;
        ll sum1=0;
        //input_2nd arry

        f(i,n)
        {
            int a;
            cin>>a;
            if(arr[i]==0)
            {
                c0++;
                v0.push_back(a);
                sum0+=a;
            }
            else
            {
                c1++;
                v1.push_back(a);
                sum1+=a;
            }
        }
        int dif = abs(c0-c1);

        sort(v0.begin(),v0.end());
        sort(v1.begin(),v1.end());
        ll totalSum = 0;
        if(c0>c1)
        {
            ll sumMinus =0;
            for(int i =0; i<dif; ++i)
            {
                sumMinus =sumMinus+v0[i];
            }
            totalSum= sum1*2 + sum0*2 -sumMinus;
        }
        else if(c0<c1)
        {
            ll sum1Minus =0;
            for(int i =0; i<dif; ++i)
            {
                sum1Minus =sum1Minus+v1[i];
            }
            totalSum= (sum0*2) +(sum1*2) -sum1Minus;

        }
        else
        {
            if(v0[0]>v1[0]){

                totalSum = sum0*2 + sum1*2 -v1[0];
            }
            else{
                totalSum = sum0*2 + sum1*2 -v0[0];
            }

        }
        cout<<totalSum<<nl;
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}

