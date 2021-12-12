#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]= {7,0,4,2,1};
    int n = 5,item=0,j=0;
    for(int i=1; i<n; i++)
    {
        item = a[i];//5
        j = i-1;//0
        while(j>=0 && a[j]>item)
        {
            a[j+1] = a[j];//7
            j= j-1;//-1


        }
        a[j+1] = item;

    }


    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
