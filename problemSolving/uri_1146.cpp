#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;

while(1){
        cin>>n;
        if(n==0){
        break;
    }
        for(int i=1;i<=n;++i){
                if(i!=1){
                    cout<<" ";
                }
            cout<<i;
        }
        cout<<endl;

}
return 0;
}



