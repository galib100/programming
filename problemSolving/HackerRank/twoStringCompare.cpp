#include<bits/stdc++.h>
using namespace std;
int main(){
int p;
cin>>p;
while(p--){
    string ss1,ss2;
    int c=0;
    cin>>ss1;
    cin>>ss2;
    for(int i=0;i<ss1.length();i++){
        for(int j=0;j<ss2.length();j++){
                if(ss1[i]==ss2[j]){
                c = 1;
                break;
            }
        }



    }
    if(c==1){
        cout<<"YES"<<endl;
        c=0;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}
