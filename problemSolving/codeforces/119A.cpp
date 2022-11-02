
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   ll n,a,b,c;
   cin>>n>>a>>b>>c;
  vector<int>v;
  v.push_back(a);
  v.push_back(b);
  v.push_back(c);
  sort(v.begin(),v.end());
//  for(auto var:v){
//    cout<<var<<" ";
//  }
///5 5 3 2
  int co =0;
//  if(n%v[0]==0 ){
//    co=n/v[0];
//  }else if(){
//
//  }
//  else if(n%(v[0]+v[1])==0){
//    co =(n/v[1])+((n%v[1])/v[0]);
//  }else{
//    co = (n/v[2])+((n%v[2])/v[1])+((n%v[2])%v[1])/v[0];
//  }
//
//  cout<<co<<endl;
int cnt =0;
  for(int i =0;i<3;i++){
    for(int j =i+1;j<3;j++){
//         if(n%v[i]==0 && (n/v[i])>cnt){
//            cnt =n/v[i];
//         }
cout<< v[i]<<" "<<v[j]<<endl;
  }

  }
}


int main()
{

    solve();
    return 0;
}


