#include<bits/stdc++.h>
using namespace std;

int fa(int n){
    if(n!=1){
    return n*fa(n-1);
    }
}

int main(){

int n;
cin>>n;

    cout<<fa(n)<<endl;

}
