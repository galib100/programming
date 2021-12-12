
const int N = 2e6+5;
int ar[N], ar2[N];

void selection_sort(int n)
{
    for(int i=0 ; i<n ; i++)
    {
        int min_pos = i, mini = 1<<30;

        for(int j= i+1 ; j<n ; j++)
        {
            if(ar[i] > ar[j] && mini > ar[j])
            {
                min_pos = j;
                mini = ar[j];
            }
        }
    }

}

int partitiion (int low, int high)
{
    int pivot = ar2[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++){
        if (ar2[j] < pivot)
        {
            i++;
            swap(ar2[i], ar2[j]);
        }
    }
    swap(ar2[i + 1], ar2[high]);
    return (i + 1);
}

void quickSort(int low, int high)
{
    if (low < high)
    {
        int pi = partitiion(low, high);
        quickSort(low, pi - 1);
        quickSort(pi + 1, high);
    }
}
