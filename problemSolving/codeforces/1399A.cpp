#include<bits/stdc++.h>
//not_completed
using namespace std;
void deleteEle(int pos,int a[100],int n){
for(int i=pos-1;i<n-1;i++){
    a[i]=a[i+1];
}
}
int main(){

    int t;
    while(t--){
        int n,a[100];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int j=a[n-1];
         for(int i=0;i<n;i++){
            if(abs(a[i]-a[j]<1)){
                if(a[i]>a[j]){
                    deleteEle(j,a,n);
                }else{
                deleteEle(i,a,n);
                }
            }
        } for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
    }


return 0;
}
