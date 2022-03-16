#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    ///1+(2-p)
    ///n-p/2
    int total;
    if(n%2!=0)
    {
        n=n-1;
    }
    if(p%2!=0)
    {
        p=p-1;
    }
    if(p<2){
    cout<<0<<endl;
    }else if(p<4){
    cout<<1<<endl;
    }
    else if((1+(p-2)/2)<(n-p)/2)
    {
     cout<<1+(p-2)/2<<endl;


    }else{
    cout<< (n-p)/2<<endl;

    }



}

int main()
{
    solve();
    return 0;
}

