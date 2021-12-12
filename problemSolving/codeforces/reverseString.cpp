#include<bits/stdc++.h>
using namespace std;
int main(){
string ss;
getline(cin,ss);

for(int i =ss.size();i>=0;i--){

    if(ss[i]==' '||ss[i==0]){
        for(int j=i;j!=ss.size();j++){
             cout<<ss[j]<<endl;
        }
        break;
    }
}


}
