#include<bits/stdc++.h>
using namespace std;
int main(){
int n,c=0;
string ss;
cin>>ss;
 n = ss.length();

for(int i=0;i<n;i++){
   if(ss[i]!=ss[n-i-1]){
    c=1;
    break;
   }

}
if(c==1){
    cout<<"not palingdrom"<<endl;
}
else{
    cout<<"palingdrom"<<endl;
}

return 0;
}
