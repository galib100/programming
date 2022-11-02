#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
    if(n%2==0){
        cout<<(n/2)-2<< " "<<(n/2)+2<<endl;

    }else if(n%3==0){
         cout<<(n/3)-3<<" "<< (n -(n/3)+3)<<endl;
        }else{
                 cout<<(n/5)-3<<" "<< (n/3)+3<<endl;

        }


}


int main()
{

    solve();
    return 0;
}

