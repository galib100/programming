#include<bits/stdc++.h>
using namespace std;
int main(){
int c=0;
for(int i=1;i<=10;++i){
    int n;
    cin>>n;
    if(n%3>0){
        c++;
        cout<<n%3<<endl;
    }
}
cout<<c<<endl;
}
