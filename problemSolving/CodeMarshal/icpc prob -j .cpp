#include<bits/stdc++.h>
using namespace std;
int main(){
int n,op=0;
cin>>n;
if(n<6){
    op=1;
}
else{

        op = (n/6)+1;

}
cout<<op<<endl;

}
