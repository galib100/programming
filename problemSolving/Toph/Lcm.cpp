#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,temp =0;
        cin>>l;
        for(int i=1;i<l;i++){
          if(l%i==0&&temp<i){
             temp =i;
          }
        }
        cout<<temp*l<<endl;
    }

return 0;
}
