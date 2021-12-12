#include<bits/stdc++.h>
using namespace std;

int isPrime(int a){
    int c=0;
for(int i=2;i<a;i++){
    if(a%i==0){
        c=1;
        break;
    }

}
return c;
}

int main(){
int n;
cin>>n;
if(isPrime(n)==0 && n!=1){
    cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;

}
return 0;
}
