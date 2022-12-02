#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,c=0;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        if(n%6== 0 || (n*2)%6==0){
             while(n!=1 ){
            if(n%6==0){
                n = n/6;
            }
            else if((2*n)%6==0) {
            n = n*2;
        }
         c++;
         }
         if(n==1){
    cout<<c<<endl;
    c=0;
         }
         else{
             cout<<"-1 "<<"n: "<<n<<endl;
         }
        }
        else{
             cout<<"-1"<<endl;
        }
    }

      
    return 0;
}