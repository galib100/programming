#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int isPrime(int a){
    int c=0;
for(int i=2;i<a;i++){
    if(a%i==0){
        c=1;
        break;
    }

}
return c;
}

int main(){
    long long int t;

   cin>>t;
   vector<int>vec;
   int tem=0;
   for(int i=2;tem<=t;i++){
    if(isPrime(i)!=1){
        vec.push_back(i);
        tem++;
    }
   }
   cout<<vec[t-1];
return 0;
}
