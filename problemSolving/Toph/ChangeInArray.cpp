#include<bits/stdc++.h>
using namespace std;
int main(){
int n,arr[200];
cin>>n;

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
 int q;
 cin>>q;
 while(q--){
       int l,r,x,y;
       cin>>l>>r>>x>>y;
       int i=l;
       while(i<=r){
        if(arr[i]==x){
            arr[i]=y;
        }
        i++;
       }

}
for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
