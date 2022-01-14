#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int ec=0,nc=0;
   for(int i=0;i<s.length();i++){
    if(s[i]=='E'){
        ec++;
    }else{
    nc++;
    }

   }
   if(s.length()<=2 ){
    if(ec==2 || nc==2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

   }else{
    if(ec>=2 || nc>=2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}
return 0;
}
