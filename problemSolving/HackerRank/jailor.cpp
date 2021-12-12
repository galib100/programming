#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

ll t,n,m,s;

cin>>t;
while(t--){

    cin>>n>>m>>s;//5 2 3
    ll sum = m+s;
    if(n>=sum){
        cout<<sum-1<<endl;
    }else{
    cout<<s+(m%n)-1<<endl;
    }
}
return 0;
}

