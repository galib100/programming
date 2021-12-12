#include<bits/stdc++.h>
using namespace std;
int main(){
    int c=0;
for(int i=2;i<2021;i++){
    if(2021%i==0){
        c=1;
        break;
    }
}
if(c==0){
    cout<<"No"<<endl;
}else{
cout<<"Yes"<<endl;
}

return 0;
}
