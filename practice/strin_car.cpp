#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;

    cin>>n;
    string ar[n];
    for(ll i =0; i<n; i++)
    {

        cin>>ar[i];
    }



//    cout<< ar[0].length();
    for(ll i =0; i<n; i++)
    {
        int c=0;
        for(ll j =0; j<ar[i].length(); j++)
        {
            if(ar[i][0]>ar[i][j])
            {
                cout<<"YES"<<endl;
                c=1;
                break;
            }
        }
        if(c==0)
        {
            cout<<"NO"<<endl;
        }
    }


    return 0;
}
