#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    ll n,c=0;
    cin>>n;
for(int i=1;i<=n;i++){
         if(i<10){
        c++;
        }else if(i>10){
    int dif =i;
    while(dif<10){
            if(dif == dif%10){
                cout<<dif<<endl;
                dif = dif%10;
                c++;
            }
            if(dif<10){
                break;
            }

    }
    }
//22/10 = 2
    }
 cout<<c<<endl;
}

return 0;
}
