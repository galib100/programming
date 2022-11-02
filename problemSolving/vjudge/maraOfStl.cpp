#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define sc second
#define f(i,n) for(int i=0;i<n;++i)

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);

bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second>b.second;
}
void solve()
{
    vector<pair<int,int>>vec;
    int n;
    cin>>n;

    int arr1[10000000];
    int arr2[10000000];
    f(i,n)
    {
        cin>>arr1[i];
        cin>>arr2[i];
        vec.push_back(make_pair(arr1[i],arr2[i]));
    }
    sort(vec.begin(), vec.end(), sortbysecdesc);
    f(i,n)
    {
        cout<<vec[i].ff<<" "<<vec[i].sc<<"\n";
    }
}


int main()
{
    fastio;
    solve();
    return 0;
}


