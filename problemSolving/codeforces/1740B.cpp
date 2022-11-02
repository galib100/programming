
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fr first
#define sc second
#define f(i,n) for(int i=0;i<n;++i)

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define nl "\n"
void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
            ll n;
            cin>>n;
            ll arr[n+10];
            ll arrB[n+10];
            ll sumSmall = 0;
            ll totalSum =0;
            f(i,n){
               ll a,b;
               cin>>a>>b;
               if(a>b){
                arr[i] = b;
                arrB[i] = a;
                sumSmall +=b;

               }else{
                arr[i]=a;
                arrB[i]=b;
                sumSmall +=a;
               }
            }
             sort(arr,arr+n);
             sort(arrB,arrB+n);
             if(n==1){
                cout<<arr[0]*2+arrB[0]*2<<nl;
            }else if (n==2){
                    cout<<arr[0]*2+arr[1]*2+arrB[0]+arrB[1]+abs(arrB[1]-arrB[0])<<nl;

            }else{
                ll dif =0;
             for(int i =2;i<n-1;++i){
                dif=dif+abs(arrB[i+1]-arrB[i]);
             }
             totalSum = arrB[0]+arrB[1]+abs(arrB[2]-arrB[0])+(arrB[n-1]-arrB[1])+sumSmall*2+dif;
        cout<<totalSum<<nl;
 }

    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


