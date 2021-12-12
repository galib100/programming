#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

void swapp(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int partitionnnn (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            swapp(&arr[i], &arr[j]);
        }
    }
    swapp(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partitionnnn(arr, low, high);


        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}



void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {

        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;

        swapp(&arr[min_idx], &arr[i]);
    }
}


void print(int arr[], int siz) {
  for (int i = 0; i < siz; ++i) {
    cout << "  " << arr[i];
  }
  cout << "\n";
}
int main()
{
    cout<<"Number of testcases"<<endl;
    int t;
    cin>>t;
    while(t--)
    {
        auto time1 = high_resolution_clock::now();
    int num,n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    ofstream outfile;
    outfile.open("1810051.dat");




    for(int i=0; i<n; i++)
    {

        num=rand();
        outfile << num << endl;
    }
    outfile.close();
    ifstream infile;
    infile.open("1810051.dat");
    int arr[n];
    for(int i=0; i<n; i++)
    {
        infile >> num;

        arr[i]=num;
    }

    infile.close();
    sort(arr, arr + n, greater<int>());
    //print(arr,n);

    auto time2 = high_resolution_clock::now();
    quickSort(arr,0,n-1);
    //print(arr,n);
    auto time3 = high_resolution_clock::now();
    auto durationforquicksort = duration_cast<nanoseconds>(time3 - time2);
    cout << endl <<"Time taken for bubble sort : "<< durationforquicksort.count() <<" nanoseconds" << endl;
    cout<<endl;
    auto time4 = high_resolution_clock::now();
    selectionSort(arr,n);
    //print(arr,n);
    auto time5 = high_resolution_clock::now();
    auto durationforselectionsort = duration_cast<nanoseconds>( time5-time4);
    cout << endl <<"Time taken for insertion sort : "<< durationforselectionsort.count() <<" nanoseconds" << endl;
    cout<<endl;




    }
    return 0;

}
