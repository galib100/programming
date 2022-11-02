#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
     ll n;
     cin>>n;
     ll sum =0;
     while(n--){
     int s;
    cin>>s;
        sum+=s;
     }
     sum%4==0?cout<<sum/4<<endl : cout<<sum/4 +1<<endl;
}


int main()
{

    solve();
    return 0;
}


