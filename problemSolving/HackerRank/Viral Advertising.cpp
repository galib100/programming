#include<bits/stdc++.h>
using namespace std;
int main(){

int comu=2;
int shared = 5;
int n;
cin>>n;
while(n>1){
        shared = (shared/2)*3;
    comu =comu+(shared/2);
n--;
}
cout<<comu<<endl;
return 0;
}
