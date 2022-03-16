#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int lon=0;
    for(int i=0; i<n; i++)
    {
        int c=0;
        int b = 0;
        for(int j=i; j<n; j++)
        {
            if( a[i]-a[j]==1 || a[i]-a[j]==0 )
            {
                c++;
            }

            if( a[i]-a[j]<=0 )
            {
                b++;
            }


        }
        if(b<=c){
            if(lon<c)
            {
                lon=c;
            }
        }else{

        if(lon<b)
            {
                lon=b;
            }
        }

    }
    cout<<lon<<endl;
}
