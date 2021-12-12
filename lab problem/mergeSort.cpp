
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}
int main()
{
    myfile.close();
    int num;
    int arr[200001];
    ifstream is("1810051_descending_order.txt");
    int cnt=0;
    int x;
    cin>>num;
    while (cnt < num&& is >> x){
              arr[cnt++] = x;
    }
     fstream outfile;
    outfile.open("1810051.txt",ios::app);

    auto start=high_resolution_clock::now();
    mergeSort(arr,0,num-1);
    auto stop=high_resolution_clock::now();
    auto duration=duration_cast<nanoseconds>(stop-start);
    outfile<<"elements "<<num<<" "<<"time "<<duration.count()<<endl;
    cout<<duration.count()<<endl;

    outfile.close();
    return 0;
}
