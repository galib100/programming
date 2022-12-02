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
        vector<int> arr;
        vector<int> arr1;
        if(n==1){
          cout<<1<<nl;
          cout<<1<<" "<<2<<nl;
        }else{

            int x=2,y=n*3;
            int c=0;
           for(int i =1;i<=n-1;++i){
        if(y>x){
            arr.push_back(x);
            arr1.push_back(y);
        }
//                cout<<x<<" "<<y<<nl;
//                c++;
                x+=3;
                  y-=3;
           }
           cout<<arr.size()<<nl;
           f(i,arr.size()){
            cout<<arr[i]<<" "<<arr1[i]<<nl;
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



