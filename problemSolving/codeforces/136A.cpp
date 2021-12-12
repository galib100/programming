#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a[100],x;
     cin>>n;
    for(int i=1;i<=n; i++){
        cin>>x;
        a[x]=i;
    }
    for(int j=1; j<=n; j++){
        cout<<a[j]<<" ";

    }

    cout<<endl;

return 0;
}

