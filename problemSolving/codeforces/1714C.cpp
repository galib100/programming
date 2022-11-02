#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    int aa[10]={9,8,7,6,5,4,3,2,1};
    int sumA[10];

    for(int i =0;i<10;i++){
    if(i==0){
        sumA[i]=aa[i];
    }else{
    sumA[i] = sumA[i-1]+aa[i];
    }

    }
//    for(auto var:sumA){
//        cout<<var<<" ";
//    }

    while(t--){
        int n;
        int c =0;
        int restN =0;
        cin>>n;
        if(n<=9){
            cout<<n<<endl;
        }else{




        for(int i=0;i<10;i++){
            if(n==sumA[i]){
                c=i;
                break;
            }else if(n<sumA[i]){
                c=i-1;
                restN =n-sumA[c];
                break;
            }
        }

      if(restN!=0){ cout<<restN;}
       for(int i=c;i>=0;i--){

           cout<<aa[i];


        }
        cout<<endl;

    }

    }

}


int main()
{

    solve();
    return 0;
}

