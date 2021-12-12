#include<bits/stdc++.h>
using namespace std;

bool isPal(string ss){
   int n = ss.length();

for(int i=0;i<n;i++){
   if(ss[i]!=ss[n-i-1]){
        return false;
    break;
   }
   else {
    return true;
   }
}
}

int isPl(string ss){
   int n = ss.length();

for(int i=0;i<n;i++){
   if(ss[i]!=ss[n-i-1]){
        if(ss[i]==ss[i+1]){
            return n-i-1;
        }else{
        return i;
        }

    break;
   }
}

}
int main(){
int t;
cin>>t;
while(t--){
    string ss;
    cin>>ss;
    if(isPal(ss)==false){
        cout<<isPl(ss)<<endl;
    }
    else{
        cout<<-1<<endl;
    }

}
return 0;
}

