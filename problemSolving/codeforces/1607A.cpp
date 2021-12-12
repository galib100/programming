#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    string st;
    cin>>st;
    string s;
    cin>>s;
    int lenS= s.size();
    int fp,sum=0;
    if(lenS>1){


    for(int i=0;i<lenS; i++){
        for(int j=0;j<26;j++){
        if(s[i] == st[j]){
                if(i==0){
                    fp = j;
                }else{
                    sum= sum+abs(j-fp);
                fp = j;
                }

        }
    }
    }
     }
cout<<sum<<endl;

}
return 0;
}
