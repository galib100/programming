#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int arr[101];

        for(int i =0;i<n;++i){
            cin>>arr[i];
        }

        for(int i =0;i<n;++i){
            int b;

            cin>>b;
            while(b--){
            char a;
            cin>>a;
            if(a == 'U'){
                arr[i]-=1;
            }else{
                arr[i]+=1;
            }
            }

        }


         for(int i =0;i<n;++i){
           if(arr[i]>9){
               arr[i]  = arr[i]-10;
           }else if (arr[i]<0){
           arr[i] = 10- (arr[i]*(-1)) ;
           }
           cout<<arr[i]<<" ";
        }


    cout<<endl;
    }

}


int main()
{

    solve();
    return 0;
}



