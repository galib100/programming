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
int sumArr[100];
void solve()
{
     int n;
     cin>>n;
        int arr[n+10];
        vector<int>vec;
        f(i,n){
            vec.push_back(arr[i]);
            cin>>arr[i];
        }
        sort(vec.begin(),vec.end());
        int temp =0,in=0;
        f(i,n){
        int c=0;
           c= count(vec.begin(),vec.end(),arr[i]);
           cout<<"num: "<<arr[i]<<" cnt: "<<c<<nl;
            if(temp<c){
           temp=c;
           in = i;
            }
          }
          cout<<temp<<"index: "<<in<<nl;



}


int main()
{
    fastio;



    solve();
    return 0;
}


