#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0,i=1;
    cin>>n;
    while(n--){
        for(;;i++){
            cout<<i<<" ";
            c++;
            if(c==3){
                cout<<"PUM"<<endl;
                i=i+2;
                c=0;
                break;

            }
        }
    }
return 0;
}

