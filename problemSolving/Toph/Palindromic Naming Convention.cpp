#include<bits/stdc++.h>
using namespace std;
int ipL(string ss){
    int c=0;
    int len = ss.length();
for(int i=0;i<len;i++){
    if(ss[i]!=ss[len-i-1]){
        c=1;
        break;
    }
}
return c;
}
int main(){
int t;
cin>>t;

while(t--){
    string ss;
    string ss1;
    cin>>ss;
    if(ipL(ss)==1){
       cout<<"NOT"<<endl;
    }else {
    cout<<"P"<<endl;
    }

   }
}
