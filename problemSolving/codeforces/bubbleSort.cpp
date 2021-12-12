#include<iostream>
#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {

                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    printf("Sorted Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    cout<<endl;
}

int main()
{
    int arr[100], i, n, step, temp;
    double y ;
clock_t time_req;
    time_req = clock();
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);
time_req = clock() - time_req;
     cout<<"time difference: "<< (float)time_req/CLOCKS_PER_SEC<<endl;
    return 0;
}
