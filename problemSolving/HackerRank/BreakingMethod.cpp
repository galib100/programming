#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;

    ll arr[n],c1=0,c2=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int temp1 =arr[0];//20
    int temp2 =arr[0];//5
//20
    for(int i=1; i<n; i++)
    {

        if(arr[i]>temp1 && arr[i]>temp2)
        {
            temp1 = arr[i];
            c1++;//1
        }
        else if(arr[i]<temp1 && arr[i]<temp2)
        {
            temp2 =arr[i];
            c2++;//1
        }

    }

cout<<c1<<" "<<c2<<endl;

}
