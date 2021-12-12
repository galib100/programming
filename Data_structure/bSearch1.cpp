#include<bits/stdc++.h>
using namespace std;
bubbleSort(int arr[],int n)
{

    for(int j=1; j<n; j++)
    {
        for(int i=0; i<n-j; i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
    }
}
printf(int arr[100],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }
}

int binaryS(int arr[100],int left,int right,int x)
{

    while (left<=right)
    {


      int mid =(right+left)/2;
        if(arr[mid]<x)
        {
            left = mid+1;

        }
       else if(arr[mid]>x)
        {
            right = mid-1;
        }
        else
        {
            return mid;

        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,94,5,6,7,2,68,20};
    int left,right, mid;
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
 printf(arr,n);
cout<<endl;
    left = 0;
    right=n;
   int result  = binaryS(arr,left,right,68);
   cout<<result<<endl;

}
