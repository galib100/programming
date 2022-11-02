#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 int prefix[100];
void solve()
{
    int arr[100];
    int n;
    cin>>n;

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    for(int i =0; i<n; i++){
        prefix[i+1] =prefix[i] + arr[i];

    }
    // print_prefix
    for(int i =1; i<=n; i++){
        cout<<prefix[i]<< " ";
    }
    cout<<endl;


}


int main()
{

    solve();
    return 0;
}


