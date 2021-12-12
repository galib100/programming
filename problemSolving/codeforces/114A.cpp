#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
long long sum=0,n,arr[100],total =0,a,b;

cin>>n;
while(n--){
    cin>>a>>b;
    total += b-a;
    if(total >sum){
        sum = total ;
    }


}
cout<<sum<<endl;
return 0;
}
