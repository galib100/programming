#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,sum=0;
        cin>>x;
        for(int i=1; i<x; i++)
        {
            if(x%i==0)
            {
                sum++;
            }
        }
        if(sum==1)
        {
            cout<<x<<" eh primo"<<endl;
        }
        else
        {
            cout<<x<<" nao eh primo"<<endl;
        }

    }
    return 0;
}
