#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,d,m;
    cin>>n;
    int arr[200];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    cin>>d>>m;
    int c=0;
    for(int i=0; i<(n=1?n:n-1); i++)
    {
        int sm =0;//0
        for(int j=i; j<i+m;j++)
        {
            sm =sm+arr[j]; //1
        }
//        cout<<"sum = "<<sm<<endl;

        if(sm==d)
        {
            c++;
        }

    }
    cout<<c<<endl;
    return 0;
}
