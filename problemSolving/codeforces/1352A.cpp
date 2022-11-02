
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{

  ll t;
  cin>>t;


  while(t--){
    ll n;
     vector<int>ec;
    int c =0;
    cin>>n;
    if(n%10!=0){
         c++;
         ec.push_back(n%10);
         n = n- (n%10);
    }
    if(n%100 !=0){
         c++;
         ec.push_back(n%100);
         n = n- (n%100);
    }
     if(n%1000 !=0){
         c++;
         ec.push_back(n%1000);
         n = n- (n%1000);
    }
    if(n%10000!=0){
         c++;
         ec.push_back(n%10000);
         n = n- (n%10000);
    }else if (n%10000==0 && n!=0){
        c++;
        ec.push_back(n);
    }
    cout<<c<<endl;
     for(int i =0;i<ec.size();++i){
     if(i==0){
        cout<<ec[i];
     }else{
        cout<<" "<<ec[i];
     }

  }
  cout<<endl;
  }


}


int main()
{

    solve();
    return 0;
}


