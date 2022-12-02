#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    while(n--){
        int x,y,dis=0;
        cin>>x>>y;
        if(x<y){

        for(int i=x+1;i<y;i++){
            if(i%2!=0){
                dis+=i;
            }
        }

        }
        else{
            for(int i=y+1;i<x;i++){
            if(i%2!=0){
                dis+=i;
            }
        }
        }
        cout<<dis<<endl;

    }
return 0;
}


