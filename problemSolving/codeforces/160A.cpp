
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin>>n;

    vector<int>vec;
    int arr[101];
    while(n--)
    {
        ll a;
        cin>>a;
        vec.push_back(a);

    }
    ll sum = accumulate(vec.begin(),vec.end(),0);

//    cout<<sum<<endl;
    sort(vec.begin(),vec.end(),greater<int>());
    ll sum2 =0,c=0;
    for(auto val:vec)
    {
sum2+=val;
        if(sum2< (sum/2)+1)
        {
            c++;

        }


    }
cout<<c+1<<endl;


}


int main()
{

    solve();
    return 0;
}

