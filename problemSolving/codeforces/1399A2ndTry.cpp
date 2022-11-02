#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--){
        vector<int>vec;
        vector<int>::iterator it;
            ll n;
            cin>>n;
           for(int i=0;i<n;i++){
                ll n1;
                cin>>n1;
                vec.push_back(n1);
            }

//     cout<<vec[3];
sort(vec.begin(),vec.end());
            int c =0;
     for(int i =0;i<n-1;i++){
        if(vec[i+1]-vec[i]>1){
            c=1;
            break;
        }
     }
    c!=0?cout<<"NO"<<endl: cout<<"YES"<<endl;
}

}


int main()
{

    solve();
    return 0;
}


