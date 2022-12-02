#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int x[n];
for(int i=0;i<n;i++){
    cin>>x[i];
}
int tm=x[0],j=0;
for(int i=0;i<n;i++){
    if(tm>=x[i]){
        tm = x[i];
        j=i;
    }
}
cout<<"Menor valor: "<<tm<<endl;
cout<<"Posicao: "<<j<<endl;

return 0;
}
