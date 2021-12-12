#include<bits/stdc++.h>
using namespace std;
int main(){
while(1){
        int n;
cin>>n;

    if(n==0){
        break;
    }else{
        int t=1,t1=1;
        for(int i=1;i<=n;i++){
              if(i>1){
                t=t1*2;
                t1=t1*2;

            }
            for(int j=1;j<=n;j++){

            cout<<t<<" ";
            t=t*2;
            }
            cout<<endl;

        }
        cout<<endl;
    }

}

}
