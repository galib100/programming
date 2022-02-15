//https://lightoj.com/problem/opposite-task
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define si(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
void solve()
{
    int n;
    si(n);
    if(n<=10){
    printf("0 %d\n",n);
    }else{
        printf("10 %d\n",n-10);
    }

}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

