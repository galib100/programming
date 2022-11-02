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
        int n,x,y;
        cin>>n>>x>>y;
        if((x>0 && y==0)|| (x==0 && y>0)){

            if(x>y){
                    if((n-1)%x==0){
                            if(x==1){
                                cout<<1;
                                    for(int i=3;i<=n;i++){cout<<" "<<i;}cout<<nl;
                                }else{
                            for(int i=1;i<=n;){
                               for(int j=1;j<=x;j++){

                               i==1 && j==1?cout<<i:cout<<" "<<i;
                               }
                              if(i==1) {
                              i+=x+1;
                              }
                               else i+=x;
                            }cout<<nl;}
                    }else{
                        cout<<"-1"<<nl;
                    }
                }else{
                    if((n-1)%y==0){
                                if(y==1){
                                cout<<1;
                                    for(int i=3;i<=n;i++){cout<<" "<<i;}cout<<nl;
                                }else{


                            for(int i=1;i<=n;){

                                for(int j=1;j<=y;j++){
                               i==1&&j==1?cout<<i:cout<<" "<<i;
                               }
                               if(i==1) i+=y+1;
                               else i+=y;
//                                cout<<"ekhn i = "<<i<<nl;
                            }cout<<nl;
                            }
                    }else{
                        cout<<"-1"<<nl;
                    }
                }
        }else{
            cout<<"-1"<<nl;
        }
    }

}


int main()
{
    fastio;



    solve();
    return 0;
}


