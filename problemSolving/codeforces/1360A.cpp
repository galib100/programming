#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--){
        int c,d;
        cin>>c>>d;
        int a,b;

        if(c>d){
            a = c;
            b = d;
        }else {

            a = d;
            b = c;
        }
        if((2*b) >= a)
        {
             a = 2*b;
             b = a;
        }else{
             b = a;


        }
        cout<< a*b<<endl;
    }
}


int main()
{

    solve();
    return 0;
}

