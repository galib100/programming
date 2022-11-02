#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
ll  t;
cin>>t;
while(t--){
    ll n;
    int c =0;
    vector<char> vec;
    vector<char> ::iterator it;

    cin>>n;
    char arr[n+1];
    for(int i =0;i<n;++i){
        cin>>arr[i];
      it = find(vec.begin(),vec.end(),arr[i]);
      if(it!=vec.end()){
        c+=1;

      }else{
      c+=2;
       vec.push_back(arr[i]);
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


