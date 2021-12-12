
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
long long   t,n,arr[100];

cin>>t;
while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        ///arr[-3 5 -3 1]
         for(int i=0; i<n; i++){
            if(arr[i]!=0){
                if(arr[i]>0){arr[i]--;}
                else {arr[i]++;}
            }
        }


}
return 0;
}
