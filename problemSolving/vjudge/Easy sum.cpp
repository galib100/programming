#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,sum=0;
        cin>>n>>k;
    for(int i=1;i<=n;i++){
        sum= sum + pow(i,k);
    }
        cout<<sum<<endl;
    }
return 0;
}

