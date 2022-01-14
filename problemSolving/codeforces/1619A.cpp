#include<bits/stdc++.h>
using namespace std;
void solve(){
string ss;
cin>>ss;
int len= ss.length();
if(len%2==0){
for(int i=0;i<len/2;i++){
    if(ss[i]!=ss[(len/2)+i]){
        cout<<"NO"<<endl;
      return;
    }
}
cout<<"YES"<<endl;
}else{
cout<<"NO"<<endl;
}

}
int main(){
int t;
cin>>t;
while(t--){
   solve();
}


return 0;
}
