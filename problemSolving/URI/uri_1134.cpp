#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int aC=0,gC=0,dC=0;

while(1){
cin>>n;

if(n==1){
    aC++;
}
else if(n==2){
    gC++;
}
else if(n==3){
    dC++;
}
else if(n==4){
    break;
}
}
cout<<"MUITO OBRIGADO"<<endl;
cout<<"Alcool: "<<aC<<endl;
cout<<"Gasolina: "<<gC<<endl;
cout<<"Diesel: "<<dC<<endl;
return 0;
}
