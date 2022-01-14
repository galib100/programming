#include<bits/stdc++.h>
using namespace std;
///incomplited
vector<int> vec1;

int in=0,ar[100];
void findAndSet(int b[1000],int num){

    for(int i=0;i<7;i++){
       if(num == b[i]){
           ar[in]=num;
           in++;
        vec1.push_back(num);
       }
    }
}
int main(){
int t;
cin>>t;
while (t--){
    int b[1000];
    for(int i=0;i<7;i++){
        cin>>b[i];
    }
   for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
        findAndSet(b,abs(b[i]-b[j]));
    }
    }
}
for(int i=0;i<7;i++){
        cout<< ar[i]<<" ";
    }
return 0;
}
