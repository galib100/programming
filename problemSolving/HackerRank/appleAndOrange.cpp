#include<bits/stdc++.h>
using namespace std;
int main(){
long long int s,t,a,b,m,n;
cin>>s>>t;
cin>>a>>b;
cin>>m>>n;
int cA=0,cO=0;
long long int d=s-a;
if(d<0){
    d = d*(-1);
}
while(m--){
        long long int x;
    cin>>x;
if(x>=d){
    cA++;
}
}
long long int d2=b-t;
if(d2<0){
    d2 = d2*(-1);
}


while(n--){
        long long int y;
    cin>>y;
if((y*(-1))>=(d2)){
    cO++;
}
}
cout<<cA<<endl;
cout<<cO<<endl;

return 0;
}
