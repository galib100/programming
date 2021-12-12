#include<bits/stdc++.h>
using  namespace std;
int isPl(string ss){
    int ll = ss.length();
    int c=0;
for(int i=0;i<ll;i++){
    if(ss[i]!=ss[ll-i-1]){
        c=1;
        break;
    }
    else {
        c=0;
    }
}
return c;

}
int main(){
string ss;
cin>>ss;
if(isPl(ss)==0){
    cout<<"palingdrom"<<endl;

}
else{ cout<<"naaa pldrm na"<<endl;}

}
