
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{

    ll t;
    cin>>t;
    while(t--){
        ll n;
        vector<int>p;
    vector<int>a;
        cin>>n;
        while(n--){
            int nt;
            cin>>nt;
            p.push_back(nt);
        }


        while(1){
                if(p.begin() == (p.end()-1)){
                    a.push_back(*p.begin());
                    break;
                }
              if(*p.begin()< *(p.end()-1)){
              a.insert(a.begin(),(*p.begin()));
            p.erase(p.begin());
                }else{
                    a.push_back(*(p.end()-1));
                    p.erase(p.end()-1);

                }


        }
         for(auto val:a){
                    cout<<val <<" ";
                }
                cout<<endl;

    }



}


int main()
{

    solve();
    return 0;
}

