#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,arr[1000];
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
        }
        else
        {
            for(int i=1; i<=n; i++)
            {

                cout<<i+1<<" ";
            }
            cout<<endl;
        }

    }
return 0;
}
