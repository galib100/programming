 #include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
        ll t;
        cin>>t;
        while(t--){
            ll a,b;
            cin>>a>>b;
            int dif = abs(a-b);
            dif%10==0? cout<<dif/10<<endl:cout<<dif/10 +1<<endl;
        }

}
int main()
{

    solve();
    return 0;
}

