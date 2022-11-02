#include<bits/stdc++.h>

using namespace std;
const int  M=1e9+7;
int main(){
    long long int n;

    cin>>n;
    long long int mul = 1;

    for(int i=1;i<=n;++i){
            mul = (mul*i)%M;

    }
    cout<<mul<<endl;
return 0;
}
