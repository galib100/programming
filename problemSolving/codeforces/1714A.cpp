#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,hC,mC;
        int h=0,m=0;
        cin>>n>>hC>>mC;
        int hA,mA;
        for(int i=0; i<n; ++i)
        {
            cin>>hA>>mA;
        }
        if(hC==hA && mC==mA)
        {
            h=0;m=0;
        }
        else if(mC>mA && hC<hA)
        {
            m = (60-mC)+mA;
            h = (hA-hC)-1;
        }
        else if(mC>mA && hC>hA)
        {
            m = (60-mC)+mA;
            h = (23-hC)+hA;
        }else if(mC<mA && hC<hA){
            m = (mA-mC);
           h = (hA-hC);
        }
        else if(mC<mA && hC>hA){
            m = (mA-mC);
           h = (24-hC)+hA;
        }
        cout<<h<<" "<<m<<endl;
    }

}


int main()
{

    solve();
    return 0;
}

