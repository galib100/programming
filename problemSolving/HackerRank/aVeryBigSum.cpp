#include<bits/stdc++.h>
using namespace std;
long long int  aVeryBigSum(int a[10],int n)
{
    long long int sum=0;
 for(int i=0; i<n; i++)
    {
     sum +=a[i];
    }
    return sum;
}
int main()
{
    int a[10];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<aVeryBigSum(a,n);

//cout<<sizeof(a)/sizeof(a[0]);
return 0;
}
