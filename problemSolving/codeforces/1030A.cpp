#include<bits/stdc++.h>
using namespace std;
int main(){
int n,c=0;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x==1){
       c++;
        break;
    }

}
if(c==1){
    cout<<"HARD"<<endl;
}
else{
    cout<<"EASY"<<endl;
}

return 0;
}
