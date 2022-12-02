#include<bits/stdc++.h>
using namespace std;
int main(){
int t,arr[1000];
cin>>t;
int c =t,cnt=0;
for(int i=0;i<t*t;i++){
        if(cnt==3){
            c=t;
            cnt =0;
        }
    arr[i]=t-c;
    c--;
    cnt++;
}

for(int i=0;i<t*t;i++){
    cout<<"N["<<i<<"] = "<<arr[i]<<endl;
}

return 0;
}
