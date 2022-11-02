#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        ll h2=0,h1=0,h3=0;
        cin>>n;
        if(n%3 ==0){
            h1 = n/3 +1; //3
            h2 = n/3;//2
            h3 = h2-1;//1
        }else if (n%3==2){
            h1 = n/3 +2; //3+2 =5
            h2 = n/3+1 ;//4
            h3 = h2-2;//2
        }else {
            h1 = n/3 +2; //3+1 = 5
            h2 = n/3;//3
            h3 = n/3-1;//2
        }
        cout<< h2<< " "<<h1 << " "<<h3<<endl;
    }


}


int main()
{

    solve();
    return 0;
}


