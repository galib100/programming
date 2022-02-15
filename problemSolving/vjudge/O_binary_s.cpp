#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int binarySearch(ll arr[], ll x, ll low, ll high)
{

    // Repeat until the pointers low and high meet each other
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

void solve()
{
    int n;
    scanf("%d",&n);
    ll arr[1000000],q,k;
    for(int i =0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
//    cout<<"q input: \n";
    scanf("%lld",&q);

    while(q--)
    {
//        cout<<"k de"<<endl;

        scanf("%lld",&k);

        ll result = binarySearch(arr, k, 0, n - 1);
        if (result == -1)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");

        }


    }

}


int main()
{
    solve();
    return 0;
}


